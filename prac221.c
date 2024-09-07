#include<stdio.h>
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter 1st string : ");
    gets(str1);
    printf("Enter 2nd string : ");
    gets(str2);
    int i=0,len=0;
    while(str1[i]!='\0')
    {
        len++;
        i++;
    }
    int j=0;
    while(str2[j]!='\0')
    {
        str1[len+j]=str2[j];

        j++;
    }



    puts(str1);

    return 0;
}

