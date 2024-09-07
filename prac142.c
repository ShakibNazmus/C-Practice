#include<stdio.h>
int main()
{
    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n];
    int x,i;
    printf("Enter the number : ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        a[i]=(i+1)*x;
    }

    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}
