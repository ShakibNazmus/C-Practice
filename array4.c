#include<stdio.h>
int main()
{
    int i,a[10];


    for(i=0;i<10;i++)
    {
       a[i]=(i+1)*5;
    }
    printf("the numbers are : ");
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}

