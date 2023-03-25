#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        int n,x,sum=0;
        scanf("%d",&n);
        x=n;
        while(n>0)
        {
            int rem=n%10;
            sum=sum+(rem*rem*rem);
            n=n/10;
        }
        if(sum==x)
            printf("%d is an armstrong number!\n",x);
        else
            printf("%d is not an armstrong number!\n",x);
    }
}
