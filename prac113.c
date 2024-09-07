#include<stdio.h>
int main()
{
    int x,i;
    int count=0;
    printf("Enter the size of array : ");
    scanf("%d",&x);
    int a[x];

    printf("Enter array elements : ");
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }

    int key;
    printf("Search key : ");
    scanf("%d",&key);
    for(i=0;i<x;i++)
    {
        if(a[i]==key)
            count++;

    }
    printf("Search key appears %d times",count);

    return 0;
}
