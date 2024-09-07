#include<stdio.h>
int prime(int a)
{
    int i;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
            return 0;
    }
    return 1;

}
int main()
{
    int n;
    printf("Enter :");
    scanf("%d",&n);

    int x=prime(n);
    if(x==0)
        printf("not prime");
    else
        printf("prime");
    return 0;
}
