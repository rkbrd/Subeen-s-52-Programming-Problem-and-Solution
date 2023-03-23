#include<stdio.h>
#include<math.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        long long n,fact=1;
        scanf("%lld",&n);
        for(int i=1; i<=n; i++)
            fact=fact*i;
        printf("%lld\n",fact);
    }
}
