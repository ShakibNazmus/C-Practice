#include<stdio.h>
void Prime(int a[],int n)
{
    int i,j,count=0,t=0;
    int p[n];
    printf("enter elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                count++;
                break;
            }
        }
    }
    if(count==0)
    {
        p[t]=a[i];
        t++;
    }
    printf("Prime numbers are : ");
    for(i=0;i<n;i++)
    {
        printf("%d",p[i]);
    }




}
int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n];

    Prime(a,n);
    return 0;
}
