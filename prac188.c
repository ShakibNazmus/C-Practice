#include<stdio.h>
int main()
{
    int x;
    printf("Enter array size : ");
    scanf("%d",&x);
    int a[x],i;
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
    int pos;
    printf("\nEnter the position of the element you want : ");
    scanf("%d",&pos);
    for(i=0;i<pos;i++)
    {
        if(i==pos-1)
            printf("%d",a[i]);
    }
    return 0;
}
