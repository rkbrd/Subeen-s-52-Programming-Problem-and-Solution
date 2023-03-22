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
        int sum=(n%10)+(n/10000);
        cout<<"Sum = "<<sum<<'\n';
    }
}
