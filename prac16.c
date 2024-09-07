#include<stdio.h>
#include<math.h>
int main()

{
    int a,b,c;
    printf("Enter the values : ");
    scanf("%d %d %d",&a, &b, &c);

    float x=(-b + sqrt(pow(b,2)-4*a*b)/2*a);
    printf("%f",x);
    return 0;
}
