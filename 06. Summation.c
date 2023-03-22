#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        int n;
        scanf("%d",&n);
        int sum=(n%10)+(n/10000);
        printf("Sum = %d\n",sum);
    }
}
