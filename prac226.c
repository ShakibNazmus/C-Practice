#include<stdio.h>
struct student
{
    char name[20];
    int age;
};
int main()
{
    struct student s[3];
    int i=0;
    for(i=0;i<3;i++)
    {
       printf("Enter information of student %d",i+1);
       printf("\nEnter name : ");
       fflush(stdin);
       gets(s[i].name);
       printf("Enter age : ");
       scanf("%d",&s[i].age);
    }

    for(i=0;i<3;i++)
    {
       printf("\n\nInformation of student %d",i+1);
       printf("\nName : %s",s[i].name);
       printf("\nAge : %d",s[i].age);
    }

    return 0;

}
