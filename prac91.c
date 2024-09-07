#include<stdio.h>
int main()
{
    int i,j=2,a[100],n;
    printf("enter : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        a[i]=j;
        printf("%d\n",a[i]);
        j=j+2;
    }
}
