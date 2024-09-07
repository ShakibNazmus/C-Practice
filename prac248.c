#include<stdio.h>
void areaperi(float *p)
{
    float area=3.14**p**p;
    printf("Area : %0.2f",area);
    float peri=2*3.14**p;
    printf("Perimeter : %0.2f\n",peri);
}
int main()
{
    float r;
    printf("Enter radius : ");
    scanf("%f",&r);

    areaperi(&r);

    return 0;
}
