#include<stdio.h>
void goodchokkor(int *p1,int *p2,int *p3)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=*p3;
    *p3=temp;

}

int main()
{
    int x,y,z;
    printf("Enter value for x : ");
    scanf("%d",&x);
    printf("Enter value for y : ");
    scanf("%d",&y);
    printf("Enter value for z : ");
    scanf("%d",&z);
    printf("Before swapping :");
    printf("x=%d",x);
    printf(" y=%d",y);
    printf(" z=%d",z);


    goodchokkor(&x,&y,&z);

    printf("\nAfter swapping :");
    printf("x=%d",x);
    printf(" y=%d",y);
    printf(" z=%d",z);
}

