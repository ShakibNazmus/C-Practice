#include<stdio.h>
int main()
{
    float i,n,a=0,sum=0;
    printf("Enter limit : ");
    scanf("%f",&n);

    for(i=1;i<=n;i++)
    {
        a=a+i;
        sum=sum+1/a;
    }

    printf("%f",sum);

    return 0;
}
