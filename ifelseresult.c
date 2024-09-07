#include<stdio.h>
int main()
{
   int x;
   printf("Enter the mark = ");
   scanf("%d",&x);
   if(x>=90 && x<=100)
        printf("The result is A");
   else if(x>=80 && x<=89)
        printf("The result is B");

   else if(x>=70 && x<=79)
       printf("The result is C");

   else if(x>=60 && x<=69)
       printf("The result is D");
   else if(x<60)
       printf("The result is Fail");

   else
       printf("wrong Input");
   return 0;


}
