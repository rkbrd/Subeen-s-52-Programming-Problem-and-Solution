#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        int n;
        scanf("%d",&n);
        int zero=n/5+n/25;
        printf("%d\n",zero);
    }
}
