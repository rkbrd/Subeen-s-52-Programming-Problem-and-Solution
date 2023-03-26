#include<stdio.h>
#include<math.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        double s=(a+b+c)/2.0;
        double area=s*(s-a)*(s-b)*(s-c);
        area=sqrt(area);
        printf("Area = %.3lf\n",area);
    }
}
