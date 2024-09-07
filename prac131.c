#include<stdio.h>
int main()
{
    char s[100];
    printf("Enter string : ");
    gets(s);

    strrev(s);

    puts(s);

    return 0;
}
