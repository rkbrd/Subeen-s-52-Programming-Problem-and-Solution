#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++)
    {
        double x;
        cin>>x;
        int day=0;
        while(x>1.0)
        {
            day++;
            x=x/2.0;
        }
        cout<<day<<" days"<<endl;
    }
}
