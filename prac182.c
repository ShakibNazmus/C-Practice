#include<stdio.h>
int main()
{
    int x;
    printf("Enter array size : ");
    scanf("%d",&x);
    int a[x];
    int i,pos;
    printf("Enter elements : ");
    for(i=0;i<x;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("\nElements are : ");
    for(i=0;i<x;i++)
    {
       printf("%d ",a[i]);
    }

    printf("\nEnter the element position you want to delete : ");
    scanf("%d",&pos);
    for(i=pos-1;i<x-1;i++)
    {
        a[i]=a[i+1];
    }

    printf("\nAfter deleting : ");

    for(i=0;i<x-1;i++)
    {
       printf("%d ",a[i]);
    }

    return 0;


}
