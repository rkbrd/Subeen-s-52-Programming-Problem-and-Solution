#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        int n;
        scanf("%d",&n);
        int ans=0;
        while(n>0)
        {
            int rem=n%10;
            ans=ans*10+rem;
            n=n/10;
        }
        printf("%d\n",ans);
    }
}
