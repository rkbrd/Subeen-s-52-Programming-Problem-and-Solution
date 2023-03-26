#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++)
    {
        int p,q,c;
        cin>>p>>q>>c;
        int ans=1;
        for(int i=1; i<=q; i++)
            ans=(ans*p)%c;
        cout<<"Result = "<<ans<<endl;
    }
}
