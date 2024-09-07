#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    printf("Enter first string : ");
    gets(s1);

    char s2[100];
    printf("Enter second string : ");
    gets(s2);

    strcat(s1 ,s2);

    puts( s1 );


    return 0;

}
