#include<stdio.h>
int main()
{
    int a[]={2,3,4,5};
    int *p;
    p=&a[0];
    int i;
    for(i=0;i<4;i++)
    {
        printf("%d\n",*p);
        p++;
    }



    return 0;

}
