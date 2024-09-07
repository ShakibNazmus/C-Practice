#include<stdio.h>
int sum(int a,int b,int c)
{
    int A;
    A=a+b+c;
    return A;
}

int square(int c)
{
    int B;
    B=c*c;
    return B;
}

int main()
{
    int x,y,z;
    printf("Enter first number : ");
    scanf("%d",&x);
    printf("Enter second number : ");
    scanf("%d",&y);
    printf("Enter third number : ");
    scanf("%d",&z);

    int A=sum(x,y,z);
    printf("The sum is %d\n",A);

    int B=square(x);
    printf("The square is : %d",B);

    return 0;




}
