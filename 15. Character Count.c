#include<stdio.h>
#include<string.h>


int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        char s[1001];
        scanf("%s",s);
        for(int i=0; i<strlen(s); i++)
        {
            if(s[i]=='#')
                continue;
            int c=1;
            for(int j=i+1; j<strlen(s); j++)
                if(s[j]==s[i])
                {
                    c++;
                    s[j]='#';
                }
            printf("%c = %d\n",s[i],c);
        }
        if(cs<tc)
            printf("\n");
    }
}
