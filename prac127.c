#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50];
    printf("Enter string : ");
    gets(s1);

    char s2[50];

    strcpy(s2,s1);

    printf("Copy: %s",s1);

    return 0;

}

