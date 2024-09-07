#include<stdio.h>
int main()
{
    float n,i,sum=0;
    printf("enter number : ");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(1/i);
    }
    printf("= %0.2f\n",sum);
    return 0;
}
