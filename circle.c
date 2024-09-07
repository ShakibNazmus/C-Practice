#include<stdio.h>
int main()
{
    float r,cir,ar;
    printf("Enter the value of Radius : ");
    scanf("%f",&r);

    cir=2*3.14*r;
    printf("The value of circumference is = %f\n",cir);

    ar=3.14*r*r;
    printf("The value of Area is = %f",ar);
    return 0;
}
