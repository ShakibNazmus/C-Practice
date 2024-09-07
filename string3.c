#include<stdio.h>

int main ()
{
    char a[100];
    printf("Enter string : ");
    gets(a);

    int len = strlen(a);

    printf("Length = %d\n",len);

    return 0;
}
