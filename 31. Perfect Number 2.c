#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        int n;
        scanf("%d",&n);
        int ara[]= {6,28,496,8128,33550336};
        int ok=0;
        for(int i=0; i<5; i++)
            if(ara[i]<=n)
                printf("%d\n",ara[i]);
        printf("\n");
    }
}
