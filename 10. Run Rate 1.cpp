#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++)
    {
        int op,us,ball;
        cin>>op>>us>>ball;
        int need=op+1-us;
        int played=300-ball;

        double cur_rr=(1.0*us/played)*6.0;
        double req_rr=(1.0*need/ball)*6.0;
        
        if(need<=0)
            req_rr=0.0;

        cout<<fixed<<setprecision(2);
        cout<<cur_rr<<' '<<req_rr<<'\n';
    }
}
