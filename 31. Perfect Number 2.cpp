#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++)
    {
        int n;
        cin>>n;
        vector<int> ara= {6,28,496,8128,33550336};
        int ok=0;
        for(int i=0; i<ara.size(); i++)
            if(ara[i]<=n)
                cout<<ara[i]<<endl;
        cout<<endl;
    }
}
