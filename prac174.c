#include<stdio.h>
struct item
{
    int id;
    char jewelryname[20];
    int quantity;
};
int main()
{
    int i,x;
    printf("How many items you want to buy : ");
    scanf("%d",&x);
    struct item j[x];

    for(i=0;i<x;i++)
    {
        printf("Enter information for item %d",i+1);
        printf("\nEnter id : ");
        scanf("%d",&j[i].id);
        fflush(stdin);c
        printf("\nEnter item name : ");
        gets(j[i].jewelryname);
        printf("Enter quantity : ");
        scanf("%d",&j[i].quantity);

    }
}
