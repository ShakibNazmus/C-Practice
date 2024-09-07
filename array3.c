#include<stdio.h>
int main()
{
    int i,a[10],sum=0,n;

    printf("How many numbers : ");
    scanf("%d",&n);
    printf("Enter ten number : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d\n",sum);
    printf("The average is : %0.2f",(float)sum/n);
    return 0;

}


