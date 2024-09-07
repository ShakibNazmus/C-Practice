#include<stdio.h>
void areap(int *r)
{
    float area=3.1416**r**r;
    printf("Area is %f",area);
    float peri=2*3.14**r;
    printf("Perimeter : %f",peri);

}
int main()
{
    int r;
    printf("Enter radius : ");
    scanf("%d",&r);

    areap(&r);


}
