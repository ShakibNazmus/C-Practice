#include<stdio.h>
struct item
{
    char jewelleryname[20];
    int id[10];
    int quantity;
    double weight;
    float price;
    char material[20];
    int numGemstone;
    char colour[10];

};
struct item j[3];

void add(struct item j[])
{
      int i;

    for(i=0;i<3;i++)
    {
        printf("Enter information for item %d\n",i+1);
        printf("Enter id : ");
        scanf("%d",&j[i].id);
        fflush(stdin);
        printf("Enter item name : ");
        gets(j[i].jewelleryname);
        printf("Enter quantity : ");
        scanf("%d",&j[i].quantity);
        printf("Enter weight(gram): ");
        scanf("%lf",&j[i].weight);
        printf("Enter price in tk : ");
        scanf("%f",&j[i].price);
        fflush(stdin);
        printf("Enter material : ");
        gets(j[i].material);
        printf("Number of jemstone : ");
        scanf("%d",&j[i].numGemstone);
        fflush(stdin);
        printf("Enter colour : ");
        gets(j[i].colour);


    }
}

void print(struct item j[])
{
    int i;
     for(i=0;i<3;i++)
    {
        printf("\n\nInformation of item %d\n",i+1);
        printf("Id : %d",j[i].id);
        fflush(stdin);
        printf("\nItem name : ");
        puts(j[i].jewelleryname);
        printf("Quantity : %d",j[i].quantity);

        printf("\nWeight : %0.2lf",j[i].weight);

        printf("\nPrice in tk : %0.2f",j[i].price);

        printf("\nMaterial : ");
        puts(j[i].material);
        printf("Number of jemstone : %d",j[i].numGemstone);

        printf("\nColour : ");
        puts(j[i].colour);



    }
}

void del(struct item j[])
{
    int i,n;
    printf("\nEnter the item no you want to delete(1-100): ");
    scanf("%d",&n);
    if (n<1 || n>3)
    {
        printf("Invalid position. Deletion aborted.\n");
        return;
    }

    for(i=n-1;i<2;i++)
    {
        j[i] = j[i + 1];
    }

    printf("\nAfter deleting:\n");
    for (i=0;i<2;i++)
    {
        printf("\nInformation of item %d\n",i+1);
        printf("Id : %d",j[i].id);
        fflush(stdin);
        printf("\nItem name : ");
        puts(j[i].jewelleryname);
        printf("Quantity : %d",j[i].quantity);

        printf("\nWeight : %0.2lf",j[i].weight);

        printf("\nPrice in tk : %0.2f",j[i].price);

        printf("\nMaterial : ");
        puts(j[i].material);
        printf("Number of jemstone : %d",j[i].numGemstone);

        printf("\nColour : ");
        puts(j[i].colour);


    }
}
int main()
{
    add(j);
    print(j);
    del(j);
    return 0;
}
