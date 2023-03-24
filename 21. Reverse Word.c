#include<stdio.h>
#include<string.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        char s[1001];
        scanf("%s",s);
        for(int i=strlen(s)-1; i>=0; i--)
            printf("%c",s[i]);
        printf("\n");
    }
}
