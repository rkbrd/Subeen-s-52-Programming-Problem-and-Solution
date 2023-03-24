#include<stdio.h>

int is_prime(long long n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    for(long long i=2; i*i<=n; i++)
        if(n%i==0)
            return 0;
    return 1;
}

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        long long n;
        scanf("%lld",&n);
        if(is_prime(n)==1)
            printf("%lld is a prime\n",n);
        else
            printf("%lld is not a prime\n",n);
    }
}
