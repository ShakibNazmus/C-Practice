#include<stdio.h>
void add(int *p,int *q,int size)
{
    int r[size],i;
    for(i=0;i<size;i++)
    {
       r[i]=*p+*q;
       *p++;
       *q++;
    }

    printf("After adding : ");
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
    int a[x],b[x];
    printf("Enter element for 1st array : ");
    for(i=0;i<x;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("Enter element for 2nd array : ");
    for(i=0;i<x;i++)
    {
       scanf("%d",&b[i]);
    }

    add(a,b,x);

}
