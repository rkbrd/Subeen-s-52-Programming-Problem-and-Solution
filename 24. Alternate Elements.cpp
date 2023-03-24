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
        for(int i=0; i<n; i=i+2)
            cout<<ara[i]<<' ';
        cout<<endl;
    }
}
