#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
                a[i][j]=1;
            else if(i==0 && j==2)
                a[i][j]=1;
            else if(i==2 && j==0)
                a[i][j]=1;
            else
                a[i][j]=0;
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
