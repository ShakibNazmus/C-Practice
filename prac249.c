#include<stdio.h>
int main()
{
    int x;
    printf("Enter array size : ");
    scanf("%d",&x);
    int a[x],i,max1,max2;
    printf("Enter array element : ");
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    max1=max2=a[0];
    for(i=0;i<x;i++)
    {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2&&a[i]<max1)
        {
            max2=a[i];
        }

    }
    printf("maximum1 = %d",max1);
    printf("maximum2 = %d",max2);
    return 0;
}
