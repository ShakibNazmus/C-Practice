#include<stdio.h>
int main()
{
    int a,b,n;
    printf("Enter values : ");
    scanf("%d %d",&a ,&b);
    n=a;
    a=b;
    b=n;

    printf("a:%d b:%d",a,b);

    return 0;
}
