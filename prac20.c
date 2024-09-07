#include<stdio.h>
int main()
{
    int i,n,a[10];
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a[i]=(i+1)*5;
    }

    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
