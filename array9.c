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
    for(i=0;i<x;i++)
    {
        if(arr[i]%2==0)
            printf("%d",arr[i]);


    }





 return 0;

}
