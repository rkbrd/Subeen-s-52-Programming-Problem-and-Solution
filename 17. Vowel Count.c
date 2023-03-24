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
        int c=0;
        for(int i=0; i<strlen(s); i++)
        {
            if(is_vowel(s[i]))
                c++;
        }
        printf("Number of vowels = %d\n",c);
    }
}
