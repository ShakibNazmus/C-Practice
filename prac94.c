#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n],max2;

    printf("Enter array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max1=max2=a[0];
    for(i=0;i<n;i++)
    {
      if(a[i]>max1)
      {
          max2=max1;
          max1=a[i];

      }
      else if(a[i]> max2 && a[i]<max1)
        max2=a[i];



    }
    printf("%d\n",max1);
    printf("%d",max2);
}
