#include<stdio.h>
int main()
{
    int i,x;
    printf("Enter last number : ");
    scanf("%d",&x);
    for(i=1;i<=10;i++)
     {
        printf("%d*%d=%d\n",i,x,i*x);
     }

    return 0;
}
