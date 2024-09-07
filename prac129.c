#include<stdio.h>
int main()
{
    char s1[50];
    printf("Enter string : ");
    gets(s1);

    char s2[50];
    printf("Enter string : ");
    gets(s2);

    int d = strcmp(s1,s2);

    if(d==0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;



}
