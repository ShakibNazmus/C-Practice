#include<stdio.h>
int main()
{
    char str1[20];
    printf("Enter 1st string : ");
    gets(str1);
    int i=0;
    char str2[20];
    while(str1[i]!='\0')
    {
        str2[i]=str1[i];

        i++;
    }

    puts(str2);

    return 0;
}
