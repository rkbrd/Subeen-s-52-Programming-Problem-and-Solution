#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        int n;
        scanf("%d",&n);
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        if(cs<tc)
            printf("\n");
    }
}
