#include<stdio.h>
void Lowest(int a[],int x)
{
    int i;


    printf("Enter values : ");
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }

    int L=a[0];

    for(i=0;i<x;i++)
    {
        if(L>a[i])
            L=a[i];

    }
    printf("Lowest value : %d",L);


}
int main()
{
    int x;
    printf("Enter ayyay size : ");
    scanf("%d",&x);
    int a[x];

    Lowest(a,x);
    return 0;
}

