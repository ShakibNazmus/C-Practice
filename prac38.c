#include<stdio.h>
void check(int x)
{
    if(x>0)
    {
        printf("Positive");
    }
    else if(x<0)
    {
        printf("negative");
    }
    else if(x==0)
    {
        printf("Zero");
    }
    else
    {
        printf("Invalid");
    }
}

int main()
{
    int p;
    printf("Enter number : ");
    scanf("%d",&p);

    check(p);

    return 0;
}
