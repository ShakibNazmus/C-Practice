#include<stdio.h>
int main()
{
    char s1[100];
    printf("Enter string : ");
    gets(s1);

    char s2[100];
    int i=0,len=0,j=0;

    while(s1[i]!='\0')
    {
        len++;
        i++;
    }

    i=len-1;

    while(i>=0)
    {
        s2[j]=s1[i];
        j++;
        i--;
    }

    s2[j]='\0';


    puts(s2);

    return 0;
}

