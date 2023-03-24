#include<stdio.h>
#include<string.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        char s[101];
        scanf("%s",s);
        for(int i=0;i<strlen(s);i++)
            printf("%d",s[i]-'A'+1);
        printf("\n");
    }
}
