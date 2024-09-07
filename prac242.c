#include<stdio.h>
struct item
{
    float feet;
    float inch;
};
int main()
{
    struct item d1,d2,sum;
    printf("Enter first distance in feet: ");
    scanf("%f",&d1.feet);
    printf("Enter first distance in inch: ");
    scanf("%f",&d1.inch);
    printf("Enter second distance in feet: ");
    scanf("%f",&d2.feet);
    printf("Enter second distance in inch: ");
    scanf("%f",&d2.inch);

    sum.feet=d1.feet+d2.feet;
    sum.inch=d1.inch+d2.inch;

    printf("Sum of feet = %0.2f",sum.feet);
    printf("Sum of inch = %0.2f",sum.inch);

}
