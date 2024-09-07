#include<stdio.h>
int main()
{
    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n];
    int i;
    printf("Enter elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements are : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    int pos,x;
    printf("\nEnter value : ");
    scanf("%d",&x);
    printf("Enter position : ");
    scanf("%d",&pos);
    for(i=n;i>=pos-1;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=x;
    n++;
    printf("Array elements after insertion : ");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
