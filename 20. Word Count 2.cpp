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
        int c=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==' ')
                c++;
        }
        cout<<"Count = "<<c+1<<endl;
    }
}
