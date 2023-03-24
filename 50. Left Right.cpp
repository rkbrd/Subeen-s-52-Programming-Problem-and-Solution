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
        int n=s.size();
        for(int i=1; i<n; i++)
            if(s[i]=='L')
                s[i]=s[i-1];
        for(int i=n-2; i>=0; i--)
            if(s[i]=='R')
                s[i]=s[i+1];
        cout<<s<<endl;
    }
}
