#include<stdio.h>
#include<string.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    getchar();
    for(int cs=1; cs<=tc; cs++)
    {
        char s[10001],c;
        scanf("%[^\n]s",s);
        getchar();
        scanf("%c",&c);
        getchar();
        int count=0;
        for(int i=0; i<strlen(s); i++)
        {
            if(s[i]==c)
                count++;
        }
        if(count>0)
            printf("Occurrence of '%c' in '%s' = %d\n",c,s,count);
        else
            printf("'%c' is not present\n",c);
    }
}
