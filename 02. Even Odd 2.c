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
        int len=strlen(s);
        int n=s[len-1]-'0';
        if(n%2==0)
            printf("even\n");
        else
            printf("odd\n");
    }
}
