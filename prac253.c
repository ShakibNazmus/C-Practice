#include<stdio.h>
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=a;
}
int main()
{
    int x=5,y=10;
    printf("Before swap : x=%d\n, y=%d\n",x,y);
    swap(x,y);
    printf("After swap : x=%d\n, y=%d\n",x,y);

}
