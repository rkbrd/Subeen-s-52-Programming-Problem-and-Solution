#include<bits/stdc++.h>
using namespace std;

long long factorial(long long n)
{
    long long fact=1;
    for(int i=1; i<=n; i++)
        fact=fact*i;
    return fact;
}

int main()
{
    int tc;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++)
    {
        long long n;
        cin>>n;
        double ans=0;
        for(int i=1; i<=n; i++)
        {
            double now=1.0*i/factorial(i);
            ans=ans+now;
        }
        cout<<fixed<<setprecision(4);
        cout<<ans<<endl;
    }
}
