#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        int x,n;
        scanf("%d%d",&x,&n);
        if(x>n)
            printf("Invalid!\n");
        else
        {
            for(int i=1; i*x<=n; i++)
                printf("%d\n",x*i);
        }
        printf("\n");
    }
}
