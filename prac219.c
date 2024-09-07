#include<stdio.h>
int main()
{
    char str1[20];
    printf("Enter 1st string : ");
    gets(str1);
    //printf("Enter 2nd string : ");
    //gets(str2);
    int i=0,count=0;
    while(str1[i]!='\0')
    {
        count++;
        i++;
    }
    printf("Length of the string is : %d",count);

    return 0;
}
