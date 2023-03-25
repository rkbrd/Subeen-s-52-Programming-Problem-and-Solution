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
        string t=s;
        reverse(t.begin(),t.end());
        if(s==t)
            cout<<"Yes! It is palindrome!"<<endl;
        else
            cout<<"Sorry! It is not palindrome!"<<endl;
    }
}
