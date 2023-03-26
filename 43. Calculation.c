#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        int p,q,c;
        scanf("%d%d%d",&p,&q,&c);
        int ans=1;
        for(int i=1; i<=q; i++)
            ans=(ans*p)%c;
        printf("Result = %d\n",ans);
    }
}
