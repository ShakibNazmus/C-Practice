#include<stdio.h>
void Area(float base,float height)
{
    float area=0.5*base*height;

    printf("Area is : %f",area);
}
int main()
{
    float base,height;
    printf("Enter base : ");
    scanf("%f",&base);
    printf("Enter height : ");
    scanf("%f",&height);

    Area(base,height);

    return 0;
}
