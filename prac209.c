#include <stdio.h>
#include <string.h>

struct item
{
    char jewelleryname[20];
    int id;
    int quantity;
    double weight;
    float price;
    char material[20];
    int numGemstone;
    char colour[10];
};

struct item j[3];

FILE *file;

void add(struct item j[])
{
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Enter information for item %d\n", i + 1);
        printf("Enter id : ");
        scanf("%d", &j[i].id);
        fflush(stdin);
        printf("Enter item name : ");
        fgets(j[i].jewelleryname, sizeof(j[i].jewelleryname), stdin);
        printf("Enter quantity : ");
        scanf("%d", &j[i].quantity);
        printf("Enter weight(gram): ");
        scanf("%lf", &j[i].weight);
        printf("Enter price in tk : ");
        scanf("%f", &j[i].price);
        fflush(stdin);
        printf("Enter material : ");
        fgets(j[i].material, sizeof(j[i].material), stdin);
        printf("Number of gemstone : ");
        scanf("%d", &j[i].numGemstone);
        fflush(stdin);
        printf("Enter colour : ");
        fgets(j[i].colour, sizeof(j[i].colour), stdin);
    }
}

void print(struct item j[])
{
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("\n\nInformation of item %d\n", i + 1);
        printf("Id : %d\n", j[i].id);
        printf("Item name : %s\n", j[i].jewelleryname);
        printf("Quantity : %d\n", j[i].quantity);
        printf("Weight : %.2lf\n", j[i].weight);
        printf("Price in tk : %.2f\n", j[i].price);
        printf("Material : %s\n", j[i].material);
        printf("Number of gemstone : %d\n", j[i].numGemstone);
        printf("Colour : %s\n", j[i].colour);
    }
}

void del(struct item j[])
{
    int i, n;
    printf("\nEnter the item number you want to delete (1-3): ");
    scanf("%d", &n);
    if (n < 1 || n > 3)
    {
        printf("Invalid position. Deletion aborted.\n");
        return;
    }

    for (i = n - 1; i < 2; i++)
    {
        j[i] = j[i + 1];
    }

    printf("\nAfter deleting:\n");
    for (i = 0; i < 2; i++)
    {
        printf("\nInformation of item %d\n", i + 1);
        printf("Id : %d\n", j[i].id);
        printf("Item name : %s\n", j[i].jewelleryname);
        printf("Quantity : %d\n", j[i].quantity);
        printf("Weight : %.2lf\n", j[i].weight);
        printf("Price in tk : %.2f\n", j[i].price);
        printf("Material : %s\n", j[i].material);
        printf("Number of gemstone : %d\n", j[i].numGemstone);
        printf("Colour : %s\n", j[i].colour);
    }
}

void search(struct item j[])
{
    int i, id;
    printf("\nEnter the item id you want to search: ");
    scanf("%d", &id);

    for (i = 0; i < 3; i++)
    {
        if (j[i].id == id)
        {
            printf("\nItem found!\n");
            printf("Id : %d\n", j[i].id);
            printf("Item name : %s\n", j[i].jewelleryname);
            printf("Quantity : %d\n", j[i].quantity);
            printf("Weight : %.2lf\n", j[i].weight);
            printf("Price in tk : %.2f\n", j[i].price);
            printf("Material : %s\n", j[i].material);
            printf("Number of gemstone : %d\n", j[i].numGemstone);
            printf("Colour : %s\n", j[i].colour);
            return;
        }
    }

    printf("\nItem not found!\n");
}

void buy(struct item j[])
{
    int i, id;
    printf("\nEnter the item id you want to buy: ");
    scanf("%d", &id);

    for (i = 0; i < 3; i++)
    {
        if (j[i].id == id)
        {
            if (j[i].quantity > 0)
            {
                j[i].quantity--;
                printf("\nItem purchased successfully!\n");
            }
            else
            {
                printf("\nItem is out of stock!\n");
            }
            return;
        }
    }

    printf("\nItem not found!\n");
}

void writeToFile(struct item j[])
{
    file = fopen("jewellery.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file for writing.\n");
        return;
    }

    for (int i = 0; i < 3; i++)
    {
        fprintf(file, "%d\n", j[i].id);
        fprintf(file, "%s\n", j[i].jewelleryname);
        fprintf(file, "%d\n", j[i].quantity);
        fprintf(file, "%lf\n", j[i].weight);
        fprintf(file, "%f\n", j[i].price);
        fprintf(file, "%s\n", j[i].material);
        fprintf(file, "%d\n", j[i].numGemstone);
        fprintf(file, "%s\n", j[i].colour);
    }

    fclose(file);
    printf("Data written to file successfully.\n");
}

void readFromFile(struct item j[])
{
    file = fopen("jewellery.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file for reading.\n");
        return;
    }

    for (int i = 0; i < 3; i++)
    {
        fscanf(file, "%d", &j[i].id);
        fscanf(file, " %[^\n]", j[i].jewelleryname);
        fscanf(file, "%d", &j[i].quantity);
        fscanf(file, "%lf", &j[i].weight);
        fscanf(file, "%f", &j[i].price);
        fscanf(file, " %[^\n]", j[i].material);
        fscanf(file, "%d", &j[i].numGemstone);
        fscanf(file, " %[^\n]", j[i].colour);
    }

    fclose(file);
    printf("\nData read from file successfully.\n");
}

int main()
{
    readFromFile(j);

    add(j);
    print(j);
    del(j);
    search(j);
    buy(j);

    writeToFile(j);

    return 0;
}

