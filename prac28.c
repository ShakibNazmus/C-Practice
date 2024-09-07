#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter last number : ");
    scanf("%d",&n);
    for(i=3;i<=n;i=i+4)
    {
        sum=sum+i;
    }
    printf("Sum of the series is = %d",sum);

    return 0;
}
