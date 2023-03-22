#include<stdio.h>
#include<string.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    getchar();
    for(int cs=1; cs<=tc; cs++)
    {
        char s[100001];
        scanf("%[^\n]",s);
        getchar();
        int ans=0;
        for(int i=0; i<strlen(s); i++)
            if(s[i]==' '&&(!i||s[i-1]!=' ')) /// !i for i==0
                ans++;
        printf("%d\n",ans+1);
    }
}
