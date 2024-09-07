#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter a positive number : ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count=1;
            break;
        }
    }
    if(count==0)
    {
        printf("%d is a Prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
    return 0;
}
