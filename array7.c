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

    int max=arr[0];

    for(i=0;i<x;i++)
    {
        if(max<arr[i])
            max=arr[i];

    }
    printf("Maximum value : %d",max);
    return 0;

}
