#include<stdio.h>
int main()
{
   int n,i,m=0;
   printf("Enter number : ");
   scanf("%d",&n);
   for(i=1;i<=10;i++)
   {
       m=m+n;
       printf("%d*%d=%d\n",n,i,m);

   }

   return 0;
}

