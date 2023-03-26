#include<stdio.h>

long long factorial(long long n)
{
    long long fact=1;
    for(int i=1; i<=n; i++)
        fact=fact*i;
    return fact;
}

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        long long n;
        scanf("%lld",&n);
        double ans=0;
        for(int i=1; i<=n; i++)
        {
            double now=1.0*i/factorial(i);
            ans=ans+now;
        }
        printf("%.4lf\n",ans);
    }
}
