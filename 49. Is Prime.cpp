#include<bits/stdc++.h>
using namespace std;

bool is_prime(long long n)
{
    if(n==1)
        return false;
    if(n==2)
        return true;
    for(long long i=2; i*i<=n; i++)
        if(n%i==0)
            return false;
    return true;
}

int main()
{
    int tc;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++)
    {
        long long n;
        cin>>n;
        if(is_prime(n))
            cout<<n<<" is a prime\n";
        else
            cout<<n<<" is not a prime\n";
    }
}
