#include<stdio.h>
int main()
{
   char x;
   printf("Enter character : ");
   scanf("%c",&x);

   if((x>='A' && x<='Z') || (x>='a' && x<='z'))
   {
       printf("Alphabet");
   }
   else if(x>='0' && x<='9')
   {
       printf("Digit");
   }
   else
   {
       printf("Special character");
   }


    return 0;
}

