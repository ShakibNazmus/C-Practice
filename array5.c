#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter array size : ");
    scanf("%d",&x);
    int array[x];
    printf("Enter array element : ");
    for(i=0;i<x;i++)
    {
        scanf("%d",&array[i]);
    }

    return 0;
}
