#include <stdio.h>
int main()
{
    int taka;
    printf("ENTER TOTAL AMOUNT OF TAKA:  ");
    scanf("%d",&taka);

    int fivehundred_n=taka/500;
    int fivehundred=taka%500;
    printf("500:  %d \n",fivehundred_n);

    int hundred_n= fivehundred/100;
    int hundred=fivehundred%100;
    printf("100:  %d \n",hundred_n);

    int fifty_n=hundred/50;
    int fifty=hundred%50;
    printf("50:  %d \n",fifty_n);

    int twenty_n=fifty/20;
    int twenty=fifty%20;
    printf("20:  %d \n",twenty_n);

    int ten_n=twenty/10;
    int ten=twenty%10;
    printf("10:  %d \n",ten_n);


    int five_n=ten/5;
    int five=ten%5;
    printf("5:  %d \n",five_n);


    int two_n=five/2;
    int two=five%2;
    printf("2:  %d \n",two_n);

    int one_n=two/2;
    printf("1:  %d",one_n);

}
