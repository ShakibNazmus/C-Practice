#include<stdio.h>
int main()
{
    int a[10];
    int i=0;
    printf("Enter elements : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Elements are : ");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}
