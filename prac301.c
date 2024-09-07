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

struct item j[100];

FILE *file;

void add(struct item j[], int *count)
{
    if (*count == 100)
    {
        printf("Maximum item limit reached. Cannot add more items.\n");
        return;
    }

    printf("Enter information for item %d\n", *count + 1);
    printf("Enter id: ");
    scanf("%d", &j[*count].id);
    fflush(stdin);
    printf("Enter item name: ");
    fgets(j[*count].jewelleryname, sizeof(j[*count].jewelleryname), stdin);
    j[*count].jewelleryname[strcspn(j[*count].jewelleryname, "\n")] = '\0';
    printf("Enter quantity: ");
    scanf("%d", &j[*count].quantity);
    printf("Enter weight (gram): ");
    scanf("%lf", &j[*count].weight);
    printf("Enter price in tk: ");
    scanf("%f", &j[*count].price);
    fflush(stdin);
    printf("Enter material: ");
    fgets(j[*count].material, sizeof(j[*count].material), stdin);
    j[*count].material[strcspn(j[*count].material, "\n")] = '\0';
    printf("Number of gemstone: ");
    scanf("%d", &j[*count].numGemstone);
    fflush(stdin);
    printf("Enter colour: ");
    fgets(j[*count].colour, sizeof(j[*count].colour), stdin);
    j[*count].colour[strcspn(j[*count].colour, "\n")] = '\0';

    (*count)++;
}

void print(struct item j[], int count)
{
    int i;
    for (i = 0; i < count; i++)
    {
        printf("\n\nInformation of item %d\n", i + 1);
        printf("Id: %d\n", j[i].id);
        printf("Item name: %s\n", j[i].jewelleryname);
        printf("Quantity: %d\n", j[i].quantity);
        printf("Weight: %.2lf\n", j[i].weight);
        printf("Price in tk: %.2f\n", j[i].price);
        printf("Material: %s\n", j[i].material);
        printf("Number of gemstone: %d\n", j[i].numGemstone);
        printf("Colour: %s\n", j[i].colour);
    }
}

void del(struct item j[], int *count)
{
    int i, n;
    printf("\nEnter the item number you want to delete (1-%d): ", *count);
    scanf("%d", &n);
    if (n < 1 || n > *count)
    {
        printf("Invalid position. Deletion aborted.\n");
        return;
    }

    for (i = n - 1; i < *count - 1; i++)
    {
        j[i] = j[i + 1];
    }

    (*count)--;
    printf("\nAfter deleting:\n");
    print(j, *count);
}

void search(struct item j[], int count)
{
    int i, id;
    printf("\nEnter the item id you want to search: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++)
    {
        if (j[i].id == id)
        {
            printf("\nItem found!\n");
            printf("Id: %d\n", j[i].id);
            printf("Item name: %s\n", j[i].jewelleryname);
            printf("Quantity: %d\n", j[i].quantity);
            printf("Weight: %.2lf\n", j[i].weight);
            printf("Price in tk: %.2f\n", j[i].price);
            printf("Material: %s\n", j[i].material);
            printf("Number of gemstone: %d\n", j[i].numGemstone);
            printf("Colour: %s\n", j[i].colour);
            return;
        }
    }

    printf("\nItem not found!\n");
}

void buy(struct item j[], int count)
{
    int i, id;
    printf("\nEnter the item id you want to buy: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++)
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

void writeToFile(struct item j[], int count)
{
    file = fopen("jewellery.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file for writing.\n");
        return;
    }

    fprintf(file, "%d\n", count);  // Store the count in the file

    for (int i = 0; i < count; i++)
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

void readFromFile(struct item j[], int *count)
{
    file = fopen("jewellery.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file for reading.\n");
        return;
    }

    fscanf(file, "%d", count);  // Read the count from the file

    for (int i = 0; i < *count; i++)
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
    int count = 0;  // Variable to keep track of the number of items

    int choice;
    do
    {
        printf("\n************* Jewellery Management *************\n");
        printf("1. Read data from file\n");
        printf("2. Show all items\n");
        printf("3. Add item\n");
        printf("4. Delete item\n");
        printf("5. Search item\n");
        printf("6. Buy item\n");
        printf("7. Write data to file\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                readFromFile(j, &count);
                break;
            case 2:
                print(j, count);
                break;
            case 3:
                add(j, &count);
                break;
            case 4:
                del(j, &count);
                break;
            case 5:
                search(j, count);
                break;
            case 6:
                buy(j, count);
                break;
            case 7:
                writeToFile(j, count);
                break;
            case 0:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 0);

    return 0;
}
