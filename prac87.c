#include<stdio.h>
int main()
{
    float i=1,j=3,n,sum=0;
    printf("Enter limit : ");
    scanf("%f",&n);

    while(i<=n || j<=n)
    {
        sum=sum+1/i;
        i=i+4;
        sum=sum-1/j;
        j=j+4;
    }
    printf("%f",sum);
    return 0;
}
