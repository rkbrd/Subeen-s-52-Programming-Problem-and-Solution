
#include<stdio.h>
#include<math.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        unsigned int n;
        scanf("%u",&n);
        unsigned x=sqrt(n);
        if(x*x==n)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
