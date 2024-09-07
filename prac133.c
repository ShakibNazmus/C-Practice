#include<stdio.h>
int main()
{
    int x;
    printf("Enter array size : ");
    scanf("%d",&x);
    int a[x];
    int b[x];
    int i,j=0;
    printf("Enter elements : ");
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Elements are : ");

     for(i=0;i<x;i++)
    {
        printf("%d\t",a[i]);
    }



    i=x-1;

    while(j<x && i>=0)
    {
        b[j]=a[i];
        j++;
        i--;
    }

    printf("\nRevers : \t");

    for(j=0;j<x;j++)
    {
        printf("%d\t",b[j]);
    }

    return 0;
}
