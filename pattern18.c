#include<stdio.h>
#include<math.h>
double math(double p,double q,double r)
{
    double x1,x2;

    x1=(-q+sqrt(((q*q)-4*p*r)))/2*p;

    return x1;
}
 main()
{
    double a,b,c,D,x1;
    printf("Enter a b c : ");
    scanf("%lf %lf %lf",&a ,&b ,&c);

    double A=math(a,b,c);

    printf("value of x1 : %lf ",A);

}
