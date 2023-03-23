#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++)
    {
        long long n,fact=1;
        cin>>n;
        for(int i=1; i<=n; i++)
            fact=fact*i;
        cout<<fact<<endl;
    }
}
