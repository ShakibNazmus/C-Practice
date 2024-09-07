#include<stdio.h>
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter 1st string : ");
    gets(str1);
    printf("Enter 2nd string : ");
    gets(str2);
    int d=strcmp(str1,str2);

    if(d==0)
    {
        printf("Equal");
    }
    else
        printf("Not equal");

    return 0;
}

