#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        long long a,b,c;
        scanf("%lld%lld%lld",&a,&b,&c);
        long long i=a/c;
        if(c*i<a)
            i++;
        while(i*c<=b)
        {
            printf("%lld\n",i*c);
            i++;
        }
        printf("\n");
    }
}
