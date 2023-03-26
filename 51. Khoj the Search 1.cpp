#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++)
    {
        string s,t;
        cin>>s>>t;
        int position;
        int n=t.size();
        for(int i=0; i+n<=s.size(); i++)
            if(s.substr(i,n)==t)
            {
                position=i;
                break;
            }
        cout<<position<<endl;
    }
}
