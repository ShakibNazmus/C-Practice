#include<stdio.h>
int main()
{
    int mark;
    printf("Enter the mark : ");
    scanf("%d",&mark);

    switch(mark/10){

    case 10:
    case 9:
        printf("The result is A");
        break;
    case 8:
        printf("The result is B");
        break;
     case 7:
        printf("The result is C");
        break;
      case 6:
        printf("The result is D");
        break;
      default:
          printf("The result is fail");

    }
    return 0;
}
