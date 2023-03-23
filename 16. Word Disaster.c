#include<stdio.h>
#include<string.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    getchar();
    for(int cs=1; cs<=tc; cs++)
    {
        char s[1001];
        scanf("%[^\n]s",s);
        getchar();
        int len=strlen(s);
        char word[1001];
        int in=0;
        for(int i=0; i<len; i++)
        {
            if(s[i]!=' ')
            {
                word[in]=s[i];
                in++;
            }
            else
            {
                for(int j=in-1; j>=0; j--)
                    printf("%c",word[j]);
                printf(" ");
                in=0;
            }
        }
        for(int j=in-1; j>=0; j--)
            printf("%c",word[j]);
        printf("\n");
    }
}
