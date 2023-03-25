#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++)
    {
        int n;
        cin>>n;
        vector<int>ara(n);
        for(int i=0; i<n; i++)
            cin>>ara[i];
        int inc=1,dec=1;
        for(int i=1; i<n; i++)
            if(ara[i]<ara[i-1])
            {
                inc=0;
                break;
            }
        for(int i=n-2; i>=0; i--)
            if(ara[i]<ara[i+1])
            {
                dec=0;
                break;
            }
        if(inc==1||dec==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
