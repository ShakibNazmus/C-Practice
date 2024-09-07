#include<stdio.h>
int main()
{
   char a[100],b[100];
   printf("Enter string : ");
   gets(a);
   int i=0,j=0,len=0;

   while(a[i]!='\0')
   {
       len++;
       i++;
   }

   i=len-1;
   while(i>=0)
   {
       b[j]=a[i];
       j++;
       i--;
   }
   b[j]='\0';

   puts(b);

   return 0;

}
