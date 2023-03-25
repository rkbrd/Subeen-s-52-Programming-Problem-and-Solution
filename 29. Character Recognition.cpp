#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++)
    {
        char ch;
        cin>>ch;
        if(isupper(ch))
            cout<<"Uppercase Character"<<endl;
        else if(islower(ch))
            cout<<"Lowercase Character"<<endl;
        else if(isdigit(ch))
            cout<<"Numerical Digit"<<endl;
        else
            cout<<"Special Characters"<<endl;
    }
}
