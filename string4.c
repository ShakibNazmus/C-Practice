#include<stdio.h>
int main()
{
    char a[100];
    int i,count=0 ;
    printf("Enter string : ");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        count++;
    }
    printf("Length = %d",count);
    return 0;
}
