#include<stdio.h>
void swap(int *p1,int *p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main()
{
   int num1,num2;
   printf("Enter the first number : ");
   scanf("%d",&num1);
   printf("Enter the second number : ");
   scanf("%d",&num2);

   swap(&num1,&num2);

   printf("After swapping x=%d Y=%d",num1,num2);

   return 0;
}

