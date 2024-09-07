#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the last number of series : ");
    scanf("%d",&n);
    printf("1+2+3+....+%d",n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf(" = %d",sum);
    return 0;
}


