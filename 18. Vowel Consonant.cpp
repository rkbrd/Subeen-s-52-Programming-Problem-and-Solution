#include<bits/stdc++.h>
using namespace std;

int is_vowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        return 1;
    else
        return 0;
}

int main()
{
    int tc;
    cin>>tc;
    cin.ignore();
    for(int cs=1; cs<=tc; cs++)
    {
        string s;
        getline(cin,s);
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==' ')
                continue;
            if(is_vowel(s[i]))
                cout<<s[i];
        }
        cout<<endl;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==' ')
                continue;
            if(!is_vowel(s[i]))
                cout<<s[i];
        }
        cout<<endl;
    }
}
