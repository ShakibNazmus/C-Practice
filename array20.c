#include<stdio.h>
void Prime(int a[],int p[],int n)
{
     int i,j,c=0,t=0;
     printf("Enter elements : ");

     for(i=0;i<n;i++)
          scanf("%d",&a[i]);
     for(i=0;i<n;i++)
     {
          c=0;
          for(j=2;j<a[i];j++)
          {
               if(a[i]%j==0)
               {
                    c=1;
                    break;
               }
          }
          if(c==0)
          {
               p[t]=a[i];
               t++;
          }
     }
     printf("Prime Numbers in Above Array:");
     for(i=0;i<t;i++)
     {
          printf(" %d ",p[i]);
     }

}
int main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n];
    int p[n];

    Prime(a,p,n);
    return 0;
}


