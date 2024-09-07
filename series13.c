#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter number : ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        sum=sum+n;
        printf("%d*%d=%d\n",n,i,sum);
    }
    return 0;
}

