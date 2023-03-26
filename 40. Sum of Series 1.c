#include<stdio.h>
#include<math.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        int x,k,ans=0;
        scanf("%d%d",&x,&k);
        for(int i=0; i<=k; i++)
        {
            int mul=1;
            for(int j=1; j<=i; j++)
                mul=mul*x;
            ans=ans+mul;
        }
        printf("Result = %d\n",ans);
    }
}
