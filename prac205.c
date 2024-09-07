#include<stdio.h>
void add(int *p1,int *p2)
{
   int sum=*p1+*p2;
   printf("Sum = %d",sum);
}
int main()
{
   int num1,num2;
   printf("Enter the first number : ");
   scanf("%d",&num1);
   printf("Enter the second number : ");
   scanf("%d",&num2);
   add(&num1,&num2);

   return 0;
}

