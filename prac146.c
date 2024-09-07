#include<stdio.h>
int main()
{
    int row,col,i,j;
    printf("Enter row : ");
    scanf("%d",&row);
    printf("Enter colum : ");
    scanf("%d",&col);
    int a[row][col],b[row][col];

    printf("Enter  matrix value : ");
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
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            b[j][i]=a[i][j];
        }
        printf("\n");
    }
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}
