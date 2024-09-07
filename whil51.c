#include<stdio.h>
int main()
{
    int x=1,y,sum=0;
    printf("Enter number : ");
    scanf("%d",&y);
    while(x<=10)
    {

        printf("%d",sum+y);
        sum=sum+1;
        x++;
    }
    return 0;
}
