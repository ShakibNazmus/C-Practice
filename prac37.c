#include<stdio.h>
int evenodd(int q)
{
    if(q%2==0)
        return 0;
    else
        return 1;
}

int main()
{
    int p;
    printf("Enter number : ");
    scanf("%d",&p);

    int x=evenodd(p);

    if(x==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}
