#include<stdio.h>

int gcd(int a,int b)
{
    if(b==0)
        return a;
    if(b>a)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    return gcd(b,a%b);
}

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        long long a,b;
        scanf("%lld %lld",&a,&b);
        
        long long ans=(a*b)/gcd(a,b);
        printf("LCM = %lld\n",ans);
    }
}
