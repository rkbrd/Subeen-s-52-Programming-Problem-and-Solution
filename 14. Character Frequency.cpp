#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    cin.ignore();
    for(int cs=1; cs<=tc; cs++)
    {
        string s,c;
        getline(cin,s);
        getline(cin,c);
        int occ=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==c[0])
                occ++;
        }
        if(occ>0)
            cout<<"Occurrence of '"<<c[0]<<"' in '"<<s<<"' = "<<occ<<endl;
        else
            cout<<"'"<<c[0]<<"' is not present\n";
    }
}
