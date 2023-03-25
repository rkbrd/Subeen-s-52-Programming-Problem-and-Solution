#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    for(int cs=1; cs<=tc; cs++)
    {
        int n,x,sum=0;
        cin>>n;
        x=n;
        while(n>0)
        {
            int rem=n%10;
            sum=sum+(rem*rem*rem);
            n=n/10;
        }
        if(sum==x)
            cout<<x<<" is an armstrong number!"<<endl;
        else
            cout<<x<<" is not an armstrong number!"<<endl;
    }
}
