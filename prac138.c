#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n],b[n],c[n];

    printf("Enter element for first array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nEnter element for second array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }


    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
    }

    printf("\nAfter addition : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",c[i]);
    }
}
