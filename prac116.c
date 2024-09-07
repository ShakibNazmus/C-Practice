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

    int min=a[0];

    for(i=0;i<x;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }

    }
    printf("%d",min);



    return 0;
}

