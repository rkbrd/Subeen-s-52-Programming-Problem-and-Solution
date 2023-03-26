#include<stdio.h>
#include<math.h>

double distance(int x1,int y1,int x2,int y2)
{
    long long totat=1LL*(x1-x2)*(x1-x2)+1LL*(y1-y2)*(y1-y2);
    return sqrtl(totat);
}

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        int a,b,x,y,r;
        scanf("%d%d%d%d%d",&x,&y,&r,&a,&b);
        double dist=distance(x,y,a,b);
        if(dist<=1.0*r)
            printf("The point is inside the circle\n");
        else
            printf("The point is not inside the circle\n");
    }
}
