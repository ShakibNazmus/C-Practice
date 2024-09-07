#include<stdio.h>
struct student
{
    char name[20];
    int age;
};

int main()
{
    int x;
    printf("Enter student number : ");
    scanf("%d",&x);
    struct student s[x];
    int i=0;
    for(i=0;i<x;i++)
    {
        printf("Enter information of student : %d\n",i+1);
        printf("Enter name : ");
        fflush(stdin);
        gets(s[i].name);
        printf("Enter age : ");
        scanf("%d",&s[i].age);

    }

    for(i=0;i<x;i++)
    {
        printf("\n\nInformation of student : %d",i+1);
        printf("\nName : ");
        puts(s[i].name);
        printf("Age : %d",s[i].age);


    }
    return 0;
}
