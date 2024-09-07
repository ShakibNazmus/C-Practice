#include<stdio.h>
int main()
{
    char a[100];
    int i;

    printf("Enter string : ");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>'a'&&a[i]<'z')
            a[i]=a[i]-32;
    }
    printf("%s",a);
    return 0;


}
