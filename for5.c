#include<stdio.h>
int main()
{
    int n,i=1;
    float sum=0;
    printf("Enter the last number of series : ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i*i;
        i++;
    }
    printf(" = %f",sum);
    return 0;
}

