#include<stdio.h>
int main()
{
    int num,reminder;
    num=5;
    reminder= num % 2;
    if(reminder==0)
    {
        printf("The number is even\n");

    }
    else
    {
        printf("The number is odd\n");
    }
    return 0;
}
