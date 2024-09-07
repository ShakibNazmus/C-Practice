#include<stdio.h>
int main()
{
    int n,i=3,sum=0;
    printf("Enter last number : ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i=i+4;
    }
    printf("Sum of the series is : %d",sum);

    return 0;
}
