#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j,sum=0;

    printf("Enter row and colum for first matrix : ");
    scanf("%d%d",&r1,&c1);

    printf("Enter row and colum for second matrix : ");
    scanf("%d%d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Error..Colum of first matrix and row of 2nd matrix does not match\n");

        printf("Enter row and colum for first matrix : ");
        scanf("%d%d",&r1,&c1);

        printf("Enter row and colum for second matrix : ");
        scanf("%d%d",&r2,&c2);
    }

    printf("Enter value for first matrix : ");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("First matrix : \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter value for second matrix : ");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("second matrix : \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    printf("Multiplication matrix : ");
    for(i=0;i<r1;i++)
    {
        for(k=0;k<c1;k++)
        {

        }
    }
}
