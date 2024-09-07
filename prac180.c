#include<stdio.h>
struct student
{
    char name[20];
    int age;
};

struct student s[5];

void display(struct student s[])
{
    int i=0;
      for(i=0;i<5;i++)
    {
        printf("\n\nInformation of student : %d",i+1);
        printf("\nName : ");
        puts(s[i].name);
        printf("Age : %d",s[i].age);

    }
}

int main()
{


    int i=0;
    for(i=0;i<5;i++)
    {
        printf("Enter information of student : %d\n",i+1);
        printf("Enter name : ");
        fflush(stdin);
        gets(s[i].name);
        printf("Enter age : ");
        scanf("%d",&s[i].age);

    }
    display(s);
}
