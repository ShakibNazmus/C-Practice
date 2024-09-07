#include<stdio.h>
void badswap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;

    printf("After swapping : ");
    printf("x=%d",x);
    printf(" y=%d",y);

}
void main()
{
    int x,y;
    printf("Enter value for x : ");
    scanf("%d",&x);
    printf("Enter value for y : ");
    scanf("%d",&y);

    badswap(x,y);


}
