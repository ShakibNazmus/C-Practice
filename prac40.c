#include<stdio.h>
int main()
{
    float C,F;
    printf("enter celcius :");
    scanf("%f",&C);

    F=((C*(9/5))+32);

    printf("farenheit : %f",F);

    return 0;
}
