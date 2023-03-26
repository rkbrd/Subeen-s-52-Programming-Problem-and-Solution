#include<bits/stdc++.h>
using namespace std;

double distance(int x1,int y1,int x2,int y2)
{
    long long totat=1LL*(x1-x2)*(x1-x2)+1LL*(y1-y2)*(y1-y2);
    return sqrtl(totat);
}

int main()
{
    int tc;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++)
    {
        int a,b,x,y,r;
        cin>>x>>y>>r>>a>>b;
        double dist=distance(x,y,a,b);
        if(dist<=1.0*r)
            cout<<"The point is inside the circle\n";
        else
            cout<<"The point is not inside the circle\n";
    }
}
