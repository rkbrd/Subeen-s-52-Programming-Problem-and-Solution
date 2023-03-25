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
        char c;
        cin>>c;
        cin.ignore();
        int occ=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==c)
                occ++;
        }
        if(occ>0)
            cout<<"Occurrence of '"<<c<<"' in '"<<s<<"' = "<<occ<<endl;
        else
            cout<<"'"<<c<<"' is not present\n";
    }
}
