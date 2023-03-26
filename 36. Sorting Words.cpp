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
        vector<string> ara(n);
        for(int i=0; i<n; i++)
            cin>>ara[i];
        sort(ara.begin(),ara.end());
        for(int i=0; i<n; i++)
            cout<<ara[i]<<endl;
    }
}
