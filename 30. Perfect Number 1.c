#include<stdio.h>
#include<string.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        char n[21];
        scanf("%s",n);
        char *ara[]= {"6","28","496","8128","33550336","8589869056","137438691328","2305843008139952128"};
        int ok=0;
        for(int i=0; i<sizeof(*ara); i++)
            if(strcmp(n,ara[i])==0)
                ok=1;
        if(ok==1)
            printf("YES, %s is a perfect number!\n",n);
        else
            printf("NO, %s is not a perfect number!\n",n);
    }
}
