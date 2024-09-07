#include<stdio.h>
int main()
{
    int a1,a2,a3,sum;
    printf("Enter three angles : ");
    scanf("%d %d %d",&a1, &a2, &a3);
    sum=a1+a2+a3;
    if("sum==180 && a1>0 && a2>0 && a3>0")
        printf("Valid");
    else
        printf("Invalid");
    return 0;
}
