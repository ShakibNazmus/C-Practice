#include<stdio.h>
int main()
{
    int n,i=2,sum=0;
    printf("Enter last number : ");
    scanf("%d",&n);
    do
    {
        sum=sum+i;

        i+=2;
    }

    while(i<=n);
    printf("%d",sum);

    return 0;
}
