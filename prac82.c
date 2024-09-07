#include<stdio.h>
int main()
{
    int i,limit,n[100];
    printf("Enter limit : ");
    scanf("%d",&limit);

    for(i=0;i<limit;i++)
    {
        n[i]=(i+1)*5;

    }
    printf("The numbers are ");

    for(i=0;i<limit;i++)
    {
        printf("%d\n",n[i]);

    }
    return 0;
}
