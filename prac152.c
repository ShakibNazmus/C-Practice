#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter : ");
    scanf("%d",&n);
    float a[n];

    for(i=0;i<n;i++)
    {
        a[i]=(i+1)/(i+2);
    }

    printf("Values : ");

    for(i=0;i<n;i++)
    {
        printf("%f\n",&a[i]);
    }
    return 0;
}
