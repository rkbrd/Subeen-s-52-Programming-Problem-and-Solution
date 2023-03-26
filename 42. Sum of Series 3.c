#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        int n;
        scanf("%d",&n);
        for(int i=n; i>=0; i--)
        {
            if(i>1)
                printf("2^%d + ",i);
            else if(i==1)
                printf("2 + ");
            else
                printf("1\n");
        }
    }
}
