#include<stdio.h>
int main()
{
    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n],i;
    int *p=a;
    printf("Enter elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",p);
        p++;
    }
    p=a;

    printf("\nElements : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*p);
        p++;
    }


    return 0;
}
