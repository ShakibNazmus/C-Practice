#include<stdio.h>
int main()
{
    float i,n,sum=0;
    printf("Enter limit : ");
    scanf("%f",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+(1/(i+(i+1)));
    }

    printf("%f",sum);

    return 0;
}
