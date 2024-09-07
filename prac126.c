#include<stdio.h>
int main()
{
    char s1[50];
    printf("Enter string : ");
    gets(s1);

    char s2[50];
    printf("Enter string : ");
    gets(s2);

    int i=0,len=0,j=0;
    while(s1[i]!='\0')
    {
        len++;
        i++;
    }

    while(s2[j]!='\0')
    {
        s1[len+j]=s2[j];
        j++;

    }
    s1[len+j]='\0';

    puts(s1);
}
