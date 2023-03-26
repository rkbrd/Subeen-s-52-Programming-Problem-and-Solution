#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++)
    {
        int n,m;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin>>a[i];
        cin>>m;
        vector<int> b(m);
        for(int i=0; i<m; i++)
            cin>>b[i];
        vector<int> c;
        for(int i=0; i<n; i++)
            c.push_back(a[i]);
        for(int i=0; i<m; i++)
            c.push_back(b[i]);
        sort(c.begin(),c.end());
        for(int i=0; i<c.size(); i++)
            cout<<c[i]<<' ';
        cout<<endl;
    }
}
