#include<stdio.h>
#include<string.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        char s[51];
        scanf("%s",s);
        int n=strlen(s);
        for(int i=1; i<n; i++)
            if(s[i]=='L')
                s[i]=s[i-1];
        for(int i=n-2; i>=0; i--)
            if(s[i]=='R')
                s[i]=s[i+1];
        printf("%s\n",s);
    }
}
