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
        for(int i=n; i>=0; i--)
        {
            if(i>1)
                cout<<"2^"<<i<<" + ";
            else if(i==1)
                cout<<"2 + ";
            else
                cout<<"1\n";
        }
    }
}
