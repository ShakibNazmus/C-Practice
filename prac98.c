#include<stdio.h>
int main ()
{
    int i,n,j,count=0;
    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n];
    int b[i];
    printf("Enter elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Reverse : ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }


    return 0;
}

