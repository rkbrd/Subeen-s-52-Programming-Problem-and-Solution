#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        int n;
        scanf("%d",&n);
        int ara[n];
        for(int i=0; i<n; i++)
            scanf("%d",&ara[i]);
        int inc=1,dec=1;
        for(int i=1; i<n; i++)
            if(ara[i]<ara[i-1])
            {
                inc=0;
                break;
            }
        for(int i=n-2; i>=0; i--)
            if(ara[i]<ara[i+1])
            {
                dec=0;
                break;
            }
        if(inc==1||dec==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
