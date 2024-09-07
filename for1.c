#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter number : ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        sum=sum+n;
        printf("%d*%d=%d\n",n,i,sum);

    }
    return 0;

}
