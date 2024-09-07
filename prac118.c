#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter the size of array : ");
    scanf("%d",&x);
    int a[x];
    int b[x];

    printf("Enter elements in array : ");
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Array1 = ");
    for(i=0;i<x;i++)
    {
        printf("%d\t",a[i]);
    }

    for(i=0;i<x;i++)
    {
        b[i]=a[i];
    }

    printf("\ncopied array elements are : ");
    for(i=0;i<x;i++)
    {
        printf("%d\t",b[i]);
    }


    return 0;
}
