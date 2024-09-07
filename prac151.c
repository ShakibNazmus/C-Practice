#include<stdio.h>
void swapp(int *p1,int *p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;

}
int main()
{
    int x=10,y=20;
    printf("Before swapping x=%d , y =%d ",x,y);

    swapp(&x,&y);

    printf("After swapping x=%d , y =%d ",x,y);
    return 0;
}
