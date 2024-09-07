#include<stdio.h>
int main()
{
    char str[20],str1[20];
    printf("Enter string : ");
    gets(str);
    printf("Enter string 1: ");
    gets(str1);
    int d=strlen(str);

    int i;
    for(i=0;str1[i]!='\0';i++)
    {
       str[d+i]=str1[i];

    }
    puts(str);

    return 0;
}

