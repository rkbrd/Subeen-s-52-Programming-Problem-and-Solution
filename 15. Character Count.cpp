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
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='#')
                continue;
            int c=1;
            for(int j=i+1; j<s.size(); j++)
                if(s[j]==s[i])
                {
                    c++;
                    s[j]='#';
                }
            cout<<s[i]<<" = "<<c<<endl;
        }
        if(cs<tc)
            cout<<endl;
    }
}
