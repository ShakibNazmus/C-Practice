#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n],b[n];

    printf("Enter element for first array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }

    printf("\nAfter copying : ");
    for(i=0;i<n;i++)
    {
        printf("%d\n",b[i]);
    }



}
