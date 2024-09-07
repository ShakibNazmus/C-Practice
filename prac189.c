#include<stdio.h>
int main()
{
    int x;
    printf("Enter array size : ");
    scanf("%d",&x);
    int a[x],b[x],i;
    printf("Enter array elements : ");
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Elements are : ");

    for(i=0;i<x;i++)
    {
        printf("%d ",a[i]);
    }

    for(i=0;i<x;i++)
    {
        b[i]=a[i];
    }
    printf("\nAfter copying : ");
    for(i=0;i<x;i++)
    {
        printf("%d ",b[i]);
    }



    return 0;
}
