#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n];

    for(i=0;i<=n;i++)
    {
        a[i]=0;
    }

    for(i=0;i<=n;i++)
    {
        printf("%d\n",a[i]);
    }
}
