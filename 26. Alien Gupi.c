#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        double x;
        scanf("%lf",&x);
        int day=0;
        while(x>1.0)
        {
            day++;
            x=x/2.0;
        }
        printf("%d days\n",day);
    }
}
