#include<stdio.h>

struct person
{
    int age;
    float salary;
};
int main()
{
    struct person p1={21,25000};
    struct person p2,p3;

    p2.age=22;
    p2.salary=26000;

    p3=p2;

    printf("Information of p1 : ");
    printf("\nAge : %d",p1.age);
    printf("\nSalary : %f",p1.salary);

    printf("\nInformation of p2 : ");
    printf("\nAge : %d",p2.age);
    printf("\nSalary : %f",p2.salary);

    printf("\nInformation of p3 : ");
    printf("\nAge : %d",p3.age);
    printf("\nSalary : %f",p3.salary);

    return 0;

}
