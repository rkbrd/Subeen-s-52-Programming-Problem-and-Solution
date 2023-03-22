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
        cout<<"Case "<<cs<<": ";
        for(int i=1; i<=n; i++)
            if(n%i==0)
                cout<<i<<' ';
        cout<<'\n';
    }
}
