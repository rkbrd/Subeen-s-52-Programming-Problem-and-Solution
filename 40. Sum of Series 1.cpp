#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++)
    {
        int x,k,ans=0;
        cin>>x>>k;
        for(int i=0; i<=k; i++)
        {
            int mul=1;
            for(int j=1; j<=i; j++)
                mul=mul*x;
            ans=ans+mul;
        }
        cout<<"Result = "<<ans<<endl;
    }
}
