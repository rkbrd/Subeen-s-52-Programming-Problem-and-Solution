#include<stdio.h>
#include<string.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    getchar();
    for(int cs=1; cs<=tc; cs++)
    {
        char s[10001];
        scanf("%[^\n]s",s);
        getchar();
        int c=0;
        for(int i=0; i<strlen(s); i++)
        {
            if(s[i]==' ')
                c++;
        }
        printf("Count = %d\n",c+1);
    }
}
