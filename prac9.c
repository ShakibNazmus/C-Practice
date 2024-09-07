#include<stdio.h>
int main()
{
    int week;
    printf("enter week : ");
    scanf("%d",&week);
    if(week==1)
     printf("monday");
    else if(week==2)
     printf("tuesday");
    else if(week==3)
     printf("wednesday");
    else if(week==4)
     printf("thurseday");
    else if(week==5)
     printf("friday");
    else if(week==6)
     printf("sunday");
    else if(week==7)
     printf("monday");
    else
     printf("wrong input");
    return 0;
}
