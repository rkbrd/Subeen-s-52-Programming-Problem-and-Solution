#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact=1;
    for(int i=1; i<=n; i++)
        fact=fact*i;
    return fact;
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
        map<string,int>occ;
        int n=0;
        stringstream ss;
        ss<<s;
        while(ss>>s)
        {
            occ[s]++;
            n++;
        }
        int ans=factorial(n);
        for(auto [x,y]:occ)
            if(y>1)
                ans=ans/factorial(y);
        cout<<"1/"<<ans<<endl;
    }
}
