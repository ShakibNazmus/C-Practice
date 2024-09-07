#include<stdio.h>
#include<math.h>
void average(int a[],int n)
{
    int i,sum=0;
    printf("Enter elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    float avg=sum/n;
    printf("Avg = %f",avg);


}
int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n];
    average(a,n);
    return 0;
}
