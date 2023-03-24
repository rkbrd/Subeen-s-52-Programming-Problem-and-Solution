#include<bits/stdc++.h>
using namespace std;

const int N = 100001;
vector<int> prime(N);

void seive()
{
    for(int i=0; i<=N; i++)
        prime[i]=1;
    prime[0]=prime[1]=0;
    for(int i=2; i*i<N; i++)
    {
        if(prime[i]==1)
            for(int j=i+i; j<N; j+=i)
                prime[j]=0;
    }
}

int main()
{
    int tc;
    cin>>tc;
    seive();
    for(int cs=1; cs<=tc; cs++)
    {
        int a,b,c=0;
        cin>>a>>b;
        for(int i=a; i<=b; i++)
            if(prime[i]==1)
                c++;
        cout<<c<<endl;
    }
}
