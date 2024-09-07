#include<stdio.h>
void highest(int a[],int x)
{
    int i;
    printf("Enter element in array : ");
    for(i=0;i<x;i++)
    {
       scanf("%d",&a[i]);
    }
    int high=a[0];
    for(i=1;i<x;i++)
    {
        if(a[i]>high)
        {
            high=a[i];
        }
    }
    printf("Highest number = %d",&high);

}

void main()
{
    int x;
    printf("Enter array size : ");
    scanf("%d",&x);
    int a[x];

    highest(a,x);



}
