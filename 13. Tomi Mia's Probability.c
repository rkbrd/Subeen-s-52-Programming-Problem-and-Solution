#include<stdio.h>
#include<string.h>

int factorial(int n)
{
    int fact=1;
    for(int i=1; i<=n; i++)
        fact=fact*i;
    return fact;
}

int main()
{
    int tc;
    scanf("%d",&tc);
    getchar();
    for(int cs=1; cs<=tc; cs++)
    {
        char s[222];
        scanf("%[^\n]s",s);
        getchar();
        char word[11][22];
        int n=0; /// total word;
        int k=0;
        for(int i=0; i<strlen(s); i++)
        {
            if(s[i]!=' ')
            {
                word[n][k]=s[i];
                k++;
            }
            if(s[i]==' '||i+1==strlen(s))
            {
                word[n][k]='\0';
                k=0;
                n++;
            }
        }
        int ans=factorial(n);
        int done[11]= {0};
        for(int i=0; i<n; i++)
        {
            if(done[i]==1)
                continue;
            int c=1;
            for(int j=i+1; j<n; j++)
                if(strcmp(word[i],word[j])==0)
                {
                    c++;
                    done[j]=1;
                }
            done[i]=1;
            if(c>1)
                ans=ans/factorial(c);
        }
        printf("1/%d\n",ans);
    }
}
