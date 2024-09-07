#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter : ");
    scanf("%d",&n);
    for(i=2;i<=n;i+=3)
    {
        sum=sum+i*i*i;
    }

    printf("%d",sum);

    return 0;
}
