#include<stdio.h>
int main()
{
     int a[10],n,i,j,c=0,p[10],t=0;
     printf("/*How Many Numbers You Want\nTo Add in Array*/\n\nEnter Limit : ");
     scanf("%d",&n);
     printf("Enter %d Numbers in Array:",n);
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
     return 0;
}
