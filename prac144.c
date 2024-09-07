#include<stdio.h>
int main()
{
    int row,col,i,j;
    printf("Enter row : ");
    scanf("%d",&row);
    printf("Enter colum : ");
    scanf("%d",&col);
    int a[row][col],b[row][col],c[row][col];

    printf("Enter a matrix value : ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Here is a matrix : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("Enter b matrix value : ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("Here is b matrix : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            c[i][j]=a[i][j]*b[i][j];
        }
    }

    printf("Here is new matrix : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
