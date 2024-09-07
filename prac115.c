#include<stdio.h>
int main()
{
    int x,i,sum=0;
    printf("Enter the size of array : ");
    scanf("%d",&x);
    int a[x];

    printf("Enter elements in array : ");
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<x;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum of the array elements : %d\n",sum);
    printf("Average : %f",(float)sum/2);

    return 0;
}
