#include<stdio.h>
int main()
{
    int p,q,r;
    printf("enter 3 number : ");
    scanf("%d %d %d",&p ,&q ,&r);

    int sum=p+q+r;
    float avg=sum/3;

    printf("%f",avg);
    return 0;
}
