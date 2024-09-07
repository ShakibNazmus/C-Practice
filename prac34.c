#include<stdio.h>
int main()
{
    double base,power,result;
    printf("Enter base : ");
    scanf("%lf",&base);

    printf("Enter power : ");
    scanf("%lf",&power);

    result = pow(base,power);

    printf("the value is : %0.2lf",result);

    return 0;
}
