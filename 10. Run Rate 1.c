#include<stdio.h>
#include<math.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        int op,us,ball;
        scanf("%d%d%d",&op,&us,&ball);
        int need=op+1-us;
        int played=300-ball;

        double cur_rr=(1.0*us/played)*6.0;
        double req_rr=(1.0*need/ball)*6.0;
        
        if(need<=0)
            req_rr=0.0;
            
        printf("%.2lf %.2lf\n",cur_rr,req_rr);
    }
}
