#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        int n,m;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        scanf("%d",&m);
        int b[m];
        for(int i=0; i<m; i++)
            scanf("%d",&b[i]);
        int c[n+m];
        int k=0,i=0,j=0;
        while(i<n&&j<m)
        {
            if(a[i]<=b[j])
            {
                c[k]=a[i];
                i++;
                k++;
            }
            else
            {
                c[k]=b[j];
                j++;
                k++;
            }
        }
        while(i<n)
        {
            c[k]=a[i];
            i++;
            k++;
        }
        while(j<m)
        {
            c[k]=b[j];
            j++;
            k++;
        }
        for(int i=0; i<n+m; i++)
            printf("%d ",c[i]);
        printf("\n");
    }
}
