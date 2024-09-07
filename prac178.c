#include<stdio.h>
void display(int a[])
{
    int i=0;
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    //int x;
    //printf("Enter the size of array : ");
    //scanf("%d",&x);
    int a[5];
    int i=0;
    printf("Enter elements : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    display(a);
    return 0;

}
