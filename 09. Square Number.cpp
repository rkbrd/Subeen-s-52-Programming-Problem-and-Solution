#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++)
    {
        unsigned int n;
        cin>>n;
        unsigned x=sqrt(n);
        if(x*x==n)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
