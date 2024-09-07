#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=2;i++)
    {
        printf("first loop\n");
        for(j=1;j<=3;j++)
        {
            printf("Second loop\n");
        }
    }
    return 0;
}
