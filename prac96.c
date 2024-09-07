#include<stdio.h>
int main()
{
    int i,j,k,l,m;
    l=0,m=0;
    char c1;
    int a[4][5];

    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            a[i][j]=2;
        }
    }
    a[0][2]=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            a[i][j]=0;
        }
    }
    a[3][0]=0;
    a[2][4]=0;
    a[3][4]=0;

    while(a[l][m]!=0&&a[l][m]!=1)
    {
        printf("Enter the character here : ");
        scanf("%c",&c1);

        if(c1=='w')
        {
            l--;
            printf("your position is : %d%d\n",l,m);
        }
        else if(c1=='s')
        {
            l++;
            printf("your position is : %d%d\n",l,m);
        }
        else if(c1=='a')
        {
            m--;
            printf("your position is : %d%d\n",l,m);
        }
        else if(c1=='d')
        {
            m++;
            printf("your position is : %d%d\n",l,m);
        }
        else
        {

            printf("Invalid");
        }
    }
    if(a[l][m]==1)
    {
        printf("Win");
    }
    else if(a[l][m]==0)
    {
        printf("Game over");
    }

}
