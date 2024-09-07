#include<stdio.h>

struct person
{
    int age;
    float salary;
};
int main()
{
    struct person p[3];

    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter information for person : %d",i+1);
        printf("\nEnter age : ");
        scanf("%d",&p[i].age);
        printf("Enter salary : ");
        scanf("%f",&p[i].salary);
    }

    for(i=0;i<3;i++)
    {
        printf("\nInformation for person : %d",i+1);
        printf("\nAge : %d",p[i].age);
        printf("\nSalary : %f",p[i].salary);

    }

    return 0;
}
