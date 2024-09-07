#include<stdio.h>
int main()
{
    int money;
    printf("Enter amount : ");
    scanf("%d",&money);
    printf("500:%d\n",money/500);
    money=money%500;
    printf("100:%d\n",money/100);
    money=money%100;
    printf("50:%d\n",money/50);
    money=money%50;
    printf("20:%d\n",money/20);
    money=money%20;
    printf("10:%d\n",money/10);
    money=money%10;
    printf("5:%d\n",money/5);
    money=money%5;
    printf("2:%d\n",money/2);
    money=money%2;
    printf("1:%d\n",money/1);

    return 0;

}
