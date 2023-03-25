#include<stdio.h>

int main()
{
    int tc;
    scanf("%d",&tc);
    getchar();
    for(int cs=1; cs<=tc; cs++)
    {
        char ch;
        scanf("%c",&ch);
        getchar();
        if(ch>='A'&&ch<='Z')
            printf("Uppercase Character\n");
        else if(ch>='a'&&ch<='z')
            printf("Lowercase Character\n");
        else if(ch>='0'&&ch<='9')
            printf("Numerical Digit\n");
        else
            printf("Special Characters\n");
    }
}
