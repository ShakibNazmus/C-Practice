#include<stdio.h>
int main()
{
  int y;
  printf("Enter a year : ");
  scanf("%d",&y);
  if(y%400==0)
    {
        printf("This a leap year");
    }
    else if(y%4==0 && y%100!=0)
    {
        printf("This is leap year");
    }
  else
   {
        printf("This is not a leap year");
   }







    return 0;
}
