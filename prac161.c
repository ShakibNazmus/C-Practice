#include<stdio.h>
void badchokkor(int x,int y,int z)
{
    int temp;
    temp=x;
    x=y;
    y=z;
    z=temp;

    printf("After swapping : ");
    printf("x=%d",x);
    printf(" y=%d",y);
    printf(" z=%d",z);

}
void main()
{
    int x,y,z;
    printf("Enter value for x : ");
    scanf("%d",&x);
    printf("Enter value for y : ");
    scanf("%d",&y);
    printf("Enter value for z : ");
    scanf("%d",&z);

    badchokkor(x,y,z);


}

