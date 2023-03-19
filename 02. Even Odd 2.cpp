#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++)
    {
        string s;
        cin>>s;
        int n=s.back()-'0';
        if(n%2==0)
            cout<<"even\n";
        else
            cout<<"odd\n";
    }
}
