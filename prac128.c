#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50];
    printf("Enter string : ");
    gets(s1);

    char s2[50];
    int i=0,j=0;

    while(s1[i]!='\0')
    {
        s2[j]=s1[i];
        i++;
        j++;
    }

    s2[j]='\0';

    printf("Copy: %s",s2);

    return 0;

}
