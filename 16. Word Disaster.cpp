#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    cin.ignore();
    for(int cs=1; cs<=tc; cs++)
    {
        string s;
        getline(cin,s);
        stringstream ss;
        ss<<s;
        while(ss>>s)
        {
            reverse(s.begin(),s.end());
            cout<<s<<' ';
        }
        cout<<'\n';
    }
}
