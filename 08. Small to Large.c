#include<stdio.h>

int max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}
int min(int x,int y)
{
    if(x<y)
        return x;
    else
        return y;
}

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        int mx=max(a,max(b,c));
        int mn=min(a,min(b,c));
        int mid=a+b+c-mx-mn;
        printf("Case %d: %d %d %d\n",cs,mn,mid,mx);
    }
}
