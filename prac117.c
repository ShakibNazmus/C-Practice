#include<stdio.h>
int main()
{
    int x,i,even=0,odd=0;
    printf("Enter array size : ");
    scanf("%d",&x);
    int a[x];

    printf("Enter array elements : ");
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<x;i++)
    {
        if(a[i]%2==0)
            even++;
        else if(a[i]%2!=0)
            odd++;
    }
    printf("Number of even element : %d\n",even);
    printf("Number of odd element : %d\n",odd);

    return 0;
}
