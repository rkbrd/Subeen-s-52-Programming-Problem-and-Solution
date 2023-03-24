#include<stdio.h>

const int N = 100001;
int prime[100001];

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
    scanf("%d",&tc);
    seive();
    for(int cs=1; cs<=tc; cs++)
    {
        int a,b,c=0;
        scanf("%d %d",&a,&b);
        for(int i=a; i<=b; i++)
            if(prime[i]==1)
                c++;
        printf("%d\n",c);
    }
}
