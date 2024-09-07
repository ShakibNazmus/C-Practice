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
        printf("Enter information for item %d\n",i+1);
        printf("Enter id : ");
        scanf("%d",&j[i].id);
        fflush(stdin);
        printf("Enter item name : ");
        gets(j[i].jewelryname);
        printf("Enter quantity : ");
        scanf("%d",&j[i].quantity);

    }
      for(i=0;i<x;i++)
    {
        printf("\nInformation for item %d\n",i+1);
        printf("Id :%d\n",j[i].id);
        printf("Name : ");
        puts(j[i].jewelryname);
        printf("Quantity : %d\n",j[i].quantity);


    }

    return 0;
}


