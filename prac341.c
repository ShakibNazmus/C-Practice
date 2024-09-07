#include<stdio.h>
void name(int x)
{
    int i;
    for(i=1;i<=x;i++)
    {
        printf("%d=Nazmus Shakib\n",i);
    }
}
int main()
{
    int x=100;
    name(x);

    return 0;
}
