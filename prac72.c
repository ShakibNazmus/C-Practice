#include<stdio.h>
void BMI(float w,float h)
{
    float bmi=w/(h*h);

    printf("BMI is : %f\n",bmi);

    if(bmi<15)
        printf("Starvation");
    else if(bmi<15.1 && bmi>17.5)
        printf("Anorexic");
    else if(bmi<17.6 && bmi>18.5)
        printf("Underweight");
    else if(bmi<18.6 && bmi>24.9)
        printf("Ideal");
    else if(bmi<25 && bmi>25.9)
        printf("Overweight");
    else if(bmi<30 && bmi>30.9)
        printf("Obese");
    else if(bmi>=40)
        printf("Morbidly obese");
    else
        printf("Invalid");
}
int main()
{
    float w,h;
    printf("Enter weight : ");
    scanf("%f",&w);
    printf("Enter height : ");
    scanf("%f",&h);

    BMI(w,h);

    return 0;


}
