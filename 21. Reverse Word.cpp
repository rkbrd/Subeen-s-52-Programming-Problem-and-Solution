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
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
}
