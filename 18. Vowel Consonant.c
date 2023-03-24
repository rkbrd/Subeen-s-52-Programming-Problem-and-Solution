#include<stdio.h>
#include<string.h>

int is_vowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        return 1;
    else
        return 0;
}

int main()
{
    int tc;
    scanf("%d",&tc);
    getchar();
    for(int cs=1; cs<=tc; cs++)
    {
        char s[1001];
        scanf("%[^\n]s",s);
        getchar();
        for(int i=0; i<strlen(s); i++)
        {
            if(s[i]==' ')
                continue;
            if(is_vowel(s[i]))
                printf("%c",s[i]);
        }
        printf("\n");
        for(int i=0; i<strlen(s); i++)
        {
            if(s[i]==' ')
                continue;
            if(!is_vowel(s[i]))
                printf("%c",s[i]);
        }
        printf("\n");
    }
}
