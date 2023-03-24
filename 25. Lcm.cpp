#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++)
    {
        long long a,b;
        cin>>a>>b;
        
        long long ans=(a*b)/__gcd(a,b);
        cout<<"LCM = "<<ans<<endl;
    }
}
