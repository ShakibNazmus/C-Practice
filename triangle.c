#include<stdio,h>
int main()
{
    float a,b,area;
    printf("Enter the value of length : ");
    scanf("%f",&a);
    printf("Enter the value of Width : ");
    scanf("%f",&b);
    area = 0.5*a*b;
    printf("The area of the triangle is = %0.3f",area);

    return 0;
}
