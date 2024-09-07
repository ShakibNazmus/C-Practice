#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0;
    float sum1=0;
    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    float mean=sum/n;
    for(i=0;i<n;i++)
    {
        sum1=sum1+pow((mean-a[i]),2);
    }
    float var=sum1/n;
    float sd=sqrt(var);

    printf("Standard deviation : %f",sd);


    return 0;

}
