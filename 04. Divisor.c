#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        int n;
        scanf("%d",&n);
        printf("Case %d: ",cs);
        for(int i=1; i<=n; i++)
            if(n%i==0)
                printf("%d ",i);
        printf("\n");
    }
}
