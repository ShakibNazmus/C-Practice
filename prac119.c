#include<stdio.h>
int main()
{
    int x,i,max1,max2;
    printf("Enter the size of array : ");
    scanf("%d",&x);
    int a[x];

    printf("Enter elements in array : ");
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }

    max1=max2=a[0];

    for(i=1;i<x;i++)
    {
        if(max1<a[i])
        {
            max2=max1;
            max1=a[i];
        }
        else if(max2<a[i] && a[i]!=max1)
        {
            max2=a[i];
        }
    }
    printf("First largest element is : %d\n",max1);
    printf("Second largest element is : %d\n",max2);

    return 0;

}
