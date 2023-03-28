#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++)
    {
        string n;
        cin>>n;
        vector<string> ara= {"6","28","496","8128","33550336","8589869056","137438691328","2305843008139952128"};
        int ok=0;
        for(int i=0; i<ara.size(); i++)
            if(n==ara[i])
                ok=1;
        if(ok==1)
            cout<<"YES, "<<n<<" is a perfect number!"<<endl;
        else
            cout<<"NO, "<<n<<" is not a perfect number!"<<endl;
    }
}
