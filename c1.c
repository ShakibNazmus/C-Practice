#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter Temperature in Farenheit\n");
    scanf("%f",&f);

    c=(f-32)/1.8;
    printf("Temperature in Dgree Celsius is %f",c);

    return 0;

}
