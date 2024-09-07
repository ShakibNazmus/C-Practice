#include<stdio.h>
int main()
{
    int n,i,a=0,b=0;
    printf("Enter limit : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            a=a+i*i;
        else
            b=b+i*i;
    }
    printf("%d",b-a);

    return 0;
}

