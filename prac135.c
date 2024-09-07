#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    printf("Enter string : ");
    gets(s);

    strlwr(s);

    puts(s);

    return 0;

}

