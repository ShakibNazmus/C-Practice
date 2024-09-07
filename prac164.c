#include<stdio.h>

struct person
{
    char name[20];
    int age;
    float salary;
};
int main()
{
    struct person p1;

    printf("Enter information of p1 : \n");
    printf("Enter name : ");
    gets(p1.name);
    printf("Enter age : ");
    scanf("%d",&p1.age);
    printf("Enter salary : ");
    scanf("%f",&p1.salary);

    printf("Information of p1 : ");
    printf("\nName : ");
    puts(p1.name);
    printf("\nAge : %d",p1.age);
    printf("\nSalary : %f",p1.salary);

    return 0;

}
