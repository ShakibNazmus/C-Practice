#include<stdio.h>
int main()
{
    char str[20];
    char str2[20];
    printf("Enter strings : ");
    gets(str);
    int i=0,j=0,len=0;
    while(str[i]!='\0')
    {
        i++;
        len++;

    }
    for(j=0,i=len-1;i>=0;i--,j++)
    {
       str2[j]=str[i];
    }
    str2[j]='\0';
    puts(str2);

    int d=strcmp(str,str2);

    if(d==0)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}

