#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="my name is : ";
    char str2[]="nazmus shakib";

    strcat(str1,str2);

    printf("%s",str1);
    return 0;
}

