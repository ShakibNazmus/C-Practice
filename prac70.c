#include <stdio.h>

void main()
{
    double number, sum = 0, i,fact=1,j;

    printf("\n enter the number ");
    scanf("%lf", &number);
    for(j=1;j<=number;j++)
    {

    for (i = 1; i <= j; i++)
    {
        fact=fact*i;
        sum = sum + (j / fact);

    }
    }
    printf("\n The sum of the given series is %.2lf", sum);
}
