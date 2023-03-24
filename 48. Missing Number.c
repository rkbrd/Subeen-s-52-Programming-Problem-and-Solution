#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        long long n;
        scanf("%lld",&n);
        long long sum=(n*(n+1))/2;
        for(int i=1; i<n; i++)
        {
            int a;
            scanf("%d",&a);
            sum=sum-a;
        }
        printf("%lld\n",sum);
    }
}
