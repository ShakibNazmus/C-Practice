#include<stdio.h>
void reverse(int *p,int size)
{
    int r[size],i;
    for(i=size-1;i>=0;i--)
    {
       r[i]=*p;
       *p++;
    }

    printf("After reversing : ");
    for(i=0;i<size;i++)
    {
       printf("%d\t",r[i]);
    }



}
int main()
{
    int x,i;
    printf("Enter array size : ");
    scanf("%d",&x);
    int a[x];
    printf("Enter element for array : ");
    for(i=0;i<x;i++)
    {
       scanf("%d",&a[i]);
    }

    reverse(a,x);

    return 0;


}
