#include<stdio.h>
int main()
{
    int n,i=0,j=0,k=0;
    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n],b[n],c[n];

    printf("Enter element for first array : ");
    while(i<n)
    {
        scanf("%d",&a[i]);
        i++;
    }

    printf("\nEnter element for second array : ");
    while(j<n)
    {
        scanf("%d",&b[j]);
        j++;
    }


    while(k<n)
    {
        c[k]=a[i]+b[j];
        k++;
        i++;
        j++;
    }

    printf("\nAfter addition : ");
    while(k<n)
    {
        printf("%d\t",c[k]);
        k++;

    }
}

