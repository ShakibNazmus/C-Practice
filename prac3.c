#include<stdio.h>
int main()
{
    int x;
    printf("Enter number : ");
    scanf("%d",&x);
    switch(x>0)
    {
    case 1:
        printf("%d is a positive number");
        break;
    case 0:
        switch(x<0)
        {
        case 1:
            printf("%d is a negative number");
            break;
        case 0:
            printf("zero");
            break;
        }
        break;
        default :
            printf("Invalid");
    }
    return 0;
}
