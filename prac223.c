#include<stdio.h>
int main()
{
    char str1[20];
    printf("Enter 1st string : ");
    gets(str1);
    char str2[20];
    printf("Enter 2nd string : ");
    gets(str2);

    int i=0,j=0,k=0,len1=0;
    while(str1[i]!='\0');
    {
        len1++;
        i++;
    }
    while(str2[j]!='\0')
    {
        str1[len1+i]=str2[j];
        i++;
        j++;
    }
    puts(str1);
    return 0;
}
