#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter sides : ");
    scanf("%d %d %d",&a ,&b ,&c);

    int sum1=a+b;
    int sum2=b+c;
    int sum3=a+c;

    if(sum1>c && sum2>a && sum3>b)
    {
        printf("Valid");
    }
    else
    {
        printf("Not valid");
    }

    return 0;
}
