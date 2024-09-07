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
    int i,pos;
    printf("\nEnter the student position : ");
    scanf("%d",&pos);
    for(i=pos-1;i<2;i++)
    {
        s[i]=s[i-1];
    }
    printf("After deleting : ");
      for(i=0;i<2;i++)
    {
        printf("\n\nInformation of student : %d",i+1);
        printf("\nName : ");
        puts(s[i].name);
        printf("Age : %d",s[i].age);

    }

}

int main()
{
    add(s);
    display(s);
    del(s);
}

