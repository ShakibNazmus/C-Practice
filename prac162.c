#include<stdio.h>
int main()
{
    char a[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a[i][j]='0';
        }
    }
    int starting_row=0;
    int starting_col=0;
    a[starting_row][starting_col]='S';

    printf("Starting position : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%c",a[i][j]);
        }
        printf("\n");
    }

    while(starting_row!=3-1 || starting_col!=3-1)
    {
        char direction;
        printf("Enter direction(U,D,L,R) : ");
        scanf("%c",&direction);

        switch(direction)
        {
            case 'U':
              if(starting_row>0)
               {
                starting_row--;
               }
                break;
            case 'D':
               if(starting_row<3-1)
               {
                starting_row++;
               }
               break;
            case 'L':
               if(starting_col>0)
               {
                starting_col--;
               }
               break;
            case 'R':
               if(starting_col<3-1)
               {
                starting_col++;
               }
               break;
            default:
                {
                    printf("Invalid position\n");
                }
                continue;

        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(i==starting_row && j==starting_col)
                {
                    a[i][j]='S';
                }
                else
                {
                    a[i][j]='0';
                }
            }
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%c",a[i][j]);
            }
            printf("\n");
        }

    }


    return 0;
}
