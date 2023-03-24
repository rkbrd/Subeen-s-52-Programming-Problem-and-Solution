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
        for(int i=0;i<s.size();i++)
            cout<<(int)(s[i]-'A'+1);
        cout<<endl;
    }
}
