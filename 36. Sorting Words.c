#include<stdio.h>
#include<string.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        int n;
        scanf("%d",&n);
        char ara[n][10001],temp[10001];
        for(int i=0; i<n; i++)
            scanf("%s",ara[i]);
        /// Bubble sort
        for(int i=0; i<n; i++)
            for(int j=i+1; j<n; j++)
                if(strcmp(ara[i],ara[j])>0)
                {
                    strcpy(temp,ara[i]);
                    strcpy(ara[i],ara[j]);
                    strcpy(ara[j],temp);
                }
        for(int i=0; i<n; i++)
            printf("%s\n",ara[i]);
    }
}
