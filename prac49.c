#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter angles : ");
    scanf("%d %d %d",&a ,&b ,&c);

    int sum=a+b+c;

    if(sum==180 && a>0 && b>0 && c>0)
    {
        printf("Valid");
    }
    else
    {
        printf("not valid");
    }
    return 0;


}
