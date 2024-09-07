#include<stdio.h>
#include<stdlib.h> // Required for dynamic memory allocation

struct student
{
    char name[20];
    int age;
};

void add(struct student* s, int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("Enter information of student %d:\n", i + 1);
        printf("Enter name: ");
        fflush(stdin);
        gets(s[i].name);
        printf("Enter age: ");
        scanf("%d", &s[i].age);
        getchar(); // Consume the newline character
    }
}

void display(struct student* s, int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("\n\nInformation of student %d", i + 1);
        printf("\nName: %s", s[i].name);
        printf("\nAge: %d", s[i].age);
    }
}

void del(struct student* s, int size)
{
    int i, pos;
    printf("\nEnter the student position (1-%d): ", size);
    scanf("%d", &pos);

    // Validate position input
    if (pos < 1 || pos > size) {
        printf("Invalid position. Deletion aborted.\n");
        return;
    }

    // Shift elements to the left to overwrite the student at the specified position
    for (i = pos - 1; i < size - 1; i++) {
        s[i] = s[i + 1];
    }

    printf("After deleting:\n");
    for (i = 0; i < size - 1; i++) {
        printf("\nInformation of student %d", i + 1);
        printf("\nName: %s", s[i].name);
        printf("\nAge: %d", s[i].age);
    }
}

int main()
{
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the student array
    struct student* s = (struct student*)malloc(size * sizeof(struct student));

    add(s, size);
    display(s, size);
    del(s, size);

    // Free dynamically allocated memory
    free(s);

    return 0;
}
