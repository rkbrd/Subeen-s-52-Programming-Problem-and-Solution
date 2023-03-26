#include<stdio.h>
#include<string.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        char s[128],t[128];
        scanf("%s%s",s,t);
        int c=0;
        int n=strlen(t);
        for(int i=0; i+n<=strlen(s); i++)
        {
            int same=0;
            for(int j=0; j<n; j++)
                if(s[i+j]==t[j])
                    same++;
                else
                    break;
            if(same==n)
                c++;
        }
        printf("%d\n",c);
    }
}
