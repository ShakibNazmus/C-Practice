#include<stdio.h>
int main()
{
   int n,i,mul=1;
    printf("enter number : ");
    scanf("%d",&n);
    printf("1*2*3*....*%d",n);
    for(i=1;i<=n;i++)
    {
        mul=mul*i;
    }
    printf("= %d\n",mul);
    return 0;
}

