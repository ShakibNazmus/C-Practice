#include<stdio.h>
struct student
{
    char name[20];
    int age;
};
struct student s[3];

void add(struct student s[])
{
     int i=0;
    for(i=0;i<3;i++)
    {
        printf("Enter information of student : %d\n",i+1);
        printf("Enter name : ");
        fflush(stdin);
        gets(s[i].name);
        printf("Enter age : ");
        scanf("%d",&s[i].age);

    }
}

void display(struct student s[])
{
    int i=0;
      for(i=0;i<3;i++)
    {
        printf("\n\nInformation of student : %d",i+1);
        printf("\nName : ");
        puts(s[i].name);
        printf("Age : %d",s[i].age);

    }
}

void del(struct student s[])
{
    int i, pos;
    printf("\nEnter the student position (1-3): ");
    scanf("%d", &pos);

    // Validate position input
    if (pos < 1 || pos > 3) {
        printf("Invalid position. Deletion aborted.\n");
        return;
    }

    // Shift elements to the left to overwrite the student at the specified position
    for (i = pos - 1; i < 2; i++) {
        s[i] = s[i + 1];
    }

    printf("After deleting:\n");
    for (i = 0; i < 2; i++) {
        printf("\nInformation of student %d", i + 1);
        printf("\nName: %s", s[i].name);
        printf("\nAge: %d", s[i].age);
    }
}

int main()
{
    add(s);
    display(s);
    del(s);
}

