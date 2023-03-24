#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++)
    {
        long long n;
        cin>>n;
        long long sum=(n*(n+1))/2;
        for(int i=1; i<n; i++)
        {
            int a;
            scanf("%d",&a);
            sum=sum-a;
        }
        cout<<sum<<endl;
    }
}
