#include<stdio.h>
int main()
{
    int n,i,sum=0,fact=1;
    printf("number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+fact;
    }
    printf("%d",sum);

    return 0;
}
