#include<stdio.h>
void copy(char a[],char b[])
{
    int i=0,j=0;

    while(a[i]!='\0')
    {
        b[j]=a[i];
        i++;
        j++;
    }

    puts(b);
}
int main()
{
    char a[100],b[100];
    printf("Enter first string : ");
    gets(a);

    copy(a,b);

    return 0;
}

