#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        int n;
        scanf("%d",&n);
        long long ara[n+1][n+1];
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
                printf("%lld ",ara[i][j]);
            printf("\n");
        }
        printf("\n");
    }
}
