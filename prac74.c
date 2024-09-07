#include<stdio.h>
int main()
{
    float n,i,fact=1,sum=0;
    printf("Enter limit : ");
    scanf("%f",&n);

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum = sum+(1/fact);
    }
    printf("%f",sum);

    return 0;

}

