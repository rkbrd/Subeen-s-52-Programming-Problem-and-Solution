#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int mx=max(a,max(b,c));
        int mn=min(a,min(b,c));
        int mid=a+b+c-mx-mn;
        cout<<"Case "<<cs<<": "<<mn<<' '<<mid<<' '<<mx<<'\n';
    }
}
