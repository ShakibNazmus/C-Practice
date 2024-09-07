#include<stdio.h>
float area(int a,int b)
{
    float Area=0.5*(a*b);
    return Area;
}

int main()
{
    int height,base;
    printf("Enter height : ");
    scanf("%d",&height);
    printf("Enter base : ");
    scanf("%d",&base);

    float Area=area(height,base);
    printf("The area is %0.2f\n",Area);
}
