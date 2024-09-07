#include<stdio.h>
void goodswap(int *p1,int *p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;

}
int main()
{
    int x,y;
    printf("Enter value for x : ");
    scanf("%d",&x);
    printf("Enter value for y : ");
    scanf("%d",&y);
    printf("Before swapping :");
    printf("x=%d",x);
    printf(" y=%d",y);

    goodswap(&x,&y);

    printf("\nAfter swapping :");
    printf("x=%d",x);
    printf(" y=%d",y);
}
