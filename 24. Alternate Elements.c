#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        int n;
        scanf("%d",&n);
        int ara[n];
        for(int i=0; i<n; i++)
            scanf("%d",&ara[i]);
        for(int i=0; i<n; i=i+2)
            printf("%d ",ara[i]);
        printf("\n");
    }
}
