#include<stdio.h>
int main()
{
    int x;
    printf("Enter two number : ");
    scanf("%d",&x);
    if(x>0)
        printf("%d is a positive number",x);
    else if(x<0)
        printf("%d is a negative number",x);
        else if(x=0)
            printf("The number is zero");
    else
        printf("invalid");
    return 0;
}
