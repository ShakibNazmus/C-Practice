#include<stdio.h>
int main()
{
    int x=1,n,sum=0;
    printf("Enter number = ");
    scanf("%d",&n);
    while(x<=10)
    {
        sum=sum+n;
        printf("%d*%d=%d\n",n,x,sum);
        x++;
    }

    return 0;


}
