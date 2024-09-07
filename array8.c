#include<stdio.h>
int main()
{
    int i,x;
    printf("Enter ayyay size : ");
    scanf("%d",&x);
    int arr[x];

    printf("Enter values : ");
    for(i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }

    int min=arr[0];

    for(i=0;i<x;i++)
    {
        if(min>arr[i])
            min=arr[i];

    }
    printf("Minimum value : %d",min);
    return 0;

}
