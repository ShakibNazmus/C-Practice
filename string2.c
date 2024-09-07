#include<stdio.h>
int main()
{
    char a[100];
    int i;
    printf("Enter full name : ");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        printf("%c\n",a[i]);
    }
   return 0;
}

