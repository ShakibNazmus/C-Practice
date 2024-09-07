#include<stdio.h>
float Area(float base,float height)
{
    float area=0.5*base*height;

    return area;
}
int main()
{
    float base,height;
    printf("Enter base : ");
    scanf("%f",&base);
    printf("Enter height : ");
    scanf("%f",&height);

    float A = Area(base,height);

    printf("Area is : %f",A);

    return 0;
}

