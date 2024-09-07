#include<stdio.h>
void check(int a)
{
    if(a>0)
        printf("Positive");
    else if(a<0)
        printf("Negative");
    else
    {
        printf("Zero");
    }
}
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);

    check(n);
}
