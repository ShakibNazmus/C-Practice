
#include<stdio.h>
void main()
{
   int year,y;

   printf("Enter the Year :");
   scanf("%d",&year);

    y=((year%4==0) && (year%400==0||year%100!=0));

 switch (y) {
        case 1:
            printf("%d is the leap year.\n", year);
            break;

        case 0:
            printf("%d is not the leap year.\n", year);
            break;

        default:
            printf("%d is not the leap year.\n", year);
    }

}
