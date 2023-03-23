#include<stdio.h>
#include<string.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=i; j++)
            {
                printf("%d",m);
                if(j<i)
                    printf(" ");
            }
            printf("\n");
        }
        for(int i=n-1; i>=1; i--)
        {
            for(int j=1; j<=i; j++)
            {
                printf("%d",m);
                if(j<i)
                    printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }
}
