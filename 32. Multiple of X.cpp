#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++)
    {
        int x,n;
        cin>>x>>n;
        if(x>n)
            cout<<"Invalid!"<<endl;
        else
        {
            for(int i=1; i*x<=n; i++)
                cout<<x*i<<endl;
        }
        cout<<endl;
    }
}
