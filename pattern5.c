#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter number of row : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d", i%2);

        }
        printf("\n");
    }
    return 0;
}

