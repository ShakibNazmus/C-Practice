#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
       sum=sum+i*i*i;
    }
    printf("%d",sum);

    return 0;
}
