#include<stdio.h>
int main()
{
    int bp,sp;
    printf("Buying price : ");
    scanf("%d",&bp);
     printf("selling price : ");
    scanf("%d",&sp);

    if(sp>bp)
    {
        int profit=sp-bp;
        printf("profit=%d",profit);
    }
    else if(bp>sp)
    {
        int loss=bp-sp;
        printf("loss=%d",loss);
    }
    else
    {
        printf("no profit no loss");
    }

    return 0;

}
