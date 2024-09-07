#include<stdio.h>
int main()
{
    char str1[20];
    printf("Enter string : ");
    gets(str1);
    int i=0,len=0;
    char str2[20];
    while(str1[i]!='\0')
    {
        len++;
        i++;
    }
    printf("Length : %d",len);
    int j;
    for(i=len-1,j=0;str1[j]!='\0';i--,j++)
    {
        str2[i]=str1[j];
    }


    printf("\nAfter reversing : %s",str2);

    return 0;
}
