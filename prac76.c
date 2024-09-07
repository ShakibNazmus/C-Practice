#include<stdio.h>
int main()
{
    float n,i,sum1=0,sum=0;
    printf("Enter limit : ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2);
    {
        sum1=sum1+i;

        sum=sum+(i/sum1);
    }
    printf("%f",sum);

    return 0;

}
