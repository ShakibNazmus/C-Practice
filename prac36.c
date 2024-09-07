#include<stdio.h>
int function(int q)
{
  if(q%2==0)
  {
      printf("Even");
  }
  else
  {
      printf("Odd");
  }


}
int main()
{
    int p;
    printf("Enter a number : ");
    scanf("%d",&p);

    function(p);


}
