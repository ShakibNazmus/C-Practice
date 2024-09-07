#include<stdio.h>
int main()
{
    int i, a[5], sum=0;


    for(i=0; i<5; i++)
    {
        printf("Enter 5 numbers : ");
        scanf("%d",&a[i]);
    }


    for(i=0;i<5;i++)
    {
        sum = sum + a[i];
    }
    printf("sum = %d\n",sum);
    printf("Avg = %0.2f",(float)sum/5);

    return 0;

}
