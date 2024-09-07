#include<stdio.h>
int main()
{
    float n,i,sum=0;
    printf("enter number : ");
    scanf("%f",&n);
    printf("(1/2)+(2/3)+(3/4)+...+(%d/(%d+1))");
    for(i=1;i<=n;i++)
    {
        sum=sum+(i/(i+1));
    }
    printf("= %.2f\n",sum);
    return 0;
}

