#include<stdio.h>
int main()
{
    char s1[100];
    printf("Enter string : ");
    gets(s1);

    char s2[100];
    printf("Enter string : ");
    gets(s2);

    char s3[1000];

    int i=0,j=0;

    while(s1[i]!='\0')
    {
        s3[j]=s1[i];
        i++;
        j++;
    }
    i=0;
    while(s2[i]!='\0')
    {
        s3[j]=s2[i];
        i++;
        j++;
    }

    s3[j]='\0';

    puts(s3);

}
