#include<stdio.h>
void areaperi(int *p)
{
   float area=3.14**p**p;
   printf("Area = %.2f\n",area);
   float peri=2*3.14**p;
   printf("Perimeter = %0.2f\n",peri);
}
int main()
{
    int r;
    printf("Enter radius : ");
    scanf("%d",&r);

    areaperi(&r);

    return 0;
}
