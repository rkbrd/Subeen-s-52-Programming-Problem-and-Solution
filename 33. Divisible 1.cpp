#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        long long i=a/c;
        if(c*i<a)
            i++;
        while(i*c<=b)
        {
            cout<<i*c<<endl;
            i++;
        }
        cout<<endl;
    }
}
