#include<stdio.h>
void Highest(int arr[],int x)
{
    int i;


    printf("Enter values : ");
    for(i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }

    int h=arr[0];

    for(i=0;i<x;i++)
    {
        if(h<arr[i])
            h=arr[i];

    }
    printf("highest value : %d",h);


}
int main()
{
    int x;
    printf("Enter ayyay size : ");
    scanf("%d",&x);
    int arr[x];

    Highest(arr,x);
    return 0;
}

