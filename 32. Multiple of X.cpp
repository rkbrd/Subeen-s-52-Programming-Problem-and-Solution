#include<bits/stdc++.h>
using namespace std;

int main()   /// Don't use endl, it is slower
{
    int tc;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++)
    {
        int x,n;
        cin>>x>>n;
        if(x>n)
            cout<<"Invalid!"<<'\n';
        else
        {
            for(int i=1; i*x<=n; i++)
                cout<<x*i<<'\n';
        }
        cout<<'\n';
    }
}
