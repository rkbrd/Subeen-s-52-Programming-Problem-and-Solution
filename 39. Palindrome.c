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
        int ok=1;
        int i=0,j=strlen(s)-1;
        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                ok=0;
                break;
            }
            i++;
            j--;
        }
        if(ok==1)
            printf("Yes! It is palindrome!\n");
        else
            printf("Sorry! It is not palindrome!\n");
    }
}
