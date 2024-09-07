#include<stdio.h>
int add(int a,int b)
{
    int A;
    A=a+b;
    return A;
}

int sub(int a,int b)
{
    int B;
    B=a-b;
    return B;
}

int mul(int a,int b)
{
    int C;
    C=a*b;
    return C;
}

float div(int a,int b)
{
    float D;
    D=a/b;
    return D;
}

int squre(int a,int b)
{
    int E;
    E=a*a;
    return E;
    int F;
    F=b*b;
    return F;
}

int cube(int a,int b)
{
    int G;
    G=a*a*a;
    return G;
    int H;
    H=b*b*b;
    return H;
}

int rem(int a,int b)
{
    int R;
    R=a%b;
    return R;
}


main()
{
    int x,y;
    printf("Enter first number : ");
    scanf("%d",&x);
    printf("Enter second number : ");
    scanf("%d",&y);

    int A=add(x,y);

    printf("The sum is : %d\n",A);

    int B=sub(x,y);

    printf("The subtraction is : %d\n",B);

    int C=mul(x,y);

    printf("The multiplication is : %d\n",C);

    float D=div(x,y);

    printf("The division is : %.2f\n",D);

    int E=squre(x,x);

    printf("The square of x is : %d\n",E);

    int F=squre(y,y);

    printf("The square of y is : %d\n",F);

    int G=qube(x,x);

    printf("The cube of x is : %d\n",G);

    int H=qube(y,y);

    printf("The cube of y is : %d\n",H);

    int R=rem(x,y);
    printf("The reminder is : %d\n",R);





}
