#include<stdio.h>
#include<math.h>
void StandardDeviation(int a[],int n)
{
    int i,sum=0;
    float sum1=0;

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

}
int main()
{
     int n;

    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n];
    StandardDeviation(a,n);
    return 0;
}

