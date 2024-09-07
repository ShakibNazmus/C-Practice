#include<stdio.h>
int main()
{
    int a[12][5][7];
    int i,j,k;


    for(k=0;k<12;k++)
    {
        printf("F\t\tA\t\tS\t\tM\t\tT\t\tW\t\tR\n");
        for(i=0;i<5;i++){

        for(j=0;j<7;j++)
        {
            if(j==0)
                printf("Holiday\t");
            else if(j==2 || j==4)
                printf("Class\t");
            else
                printf("No Class\t");
        }
        printf("\n");
        }
        printf("\n");

    }




    return 0;
}
