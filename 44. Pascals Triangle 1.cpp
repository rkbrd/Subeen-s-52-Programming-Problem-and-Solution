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
        vector<vector<int>> ara(n+1,vector<int>(n+1));
        ara[0][0]=1;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<i; j++)
                ara[i][j]=ara[i-1][j-1]+ara[i-1][j];
            ara[i][i]=ara[i][0]=1;
        }
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=i; j++)
                cout<<ara[i][j]<<' ';
            cout<<endl;
        }
        cout<<endl;
    }
}
