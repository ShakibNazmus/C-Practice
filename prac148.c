#include<stdio.h>
int main()
{
    char a[100],b[100],c[100];
    printf("Enter first string : ");
    gets(a);
    printf("Enter second string : ");
    gets(b);
    printf("Before swapping\n");
    puts(a);
    puts(b);
    strcpy(c,a);
    strcpy(a,b);
    strcpy(b,c);
    printf("After swapping\n");
    puts(a);
    puts(b);
}
