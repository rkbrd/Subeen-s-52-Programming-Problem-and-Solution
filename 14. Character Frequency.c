#include<stdio.h>
#include<string.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    getchar();
    for(int cs=1; cs<=tc; cs++)
    {
        char s[10001],c[2];
        scanf("%[^\n]s",s);
        getchar();
        scanf("%[^\n]s",c);
        getchar();
        int count=0;
        for(int i=0; i<strlen(s); i++)
        {
            if(s[i]==c[0])
                count++;
        }
        if(count>0)
            printf("Occurrence of '%c' in '%s' = %d\n",c[0],s,count);
        else
            printf("'%c' is not present\n",c[0]);
    }
}
