#include<stdio.h>
struct student
{
    char name[20];
    int id;
    float cgpa;
};
int main()
{
    struct student s1,s2;
    printf("Enter information of student 1 : \n");
    printf("Name : ");
    gets(s1.name);
    printf("Id : ");
    scanf("%d",&s1.id);
    printf("CGPA : ");
    scanf("%f",&s1.cgpa);

    printf("Enter information of student 2 : \n");
    printf("Name : ");
    fflush(stdin);
    gets(s2.name);
    printf("Id : ");
    scanf("%d",&s2.id);
    printf("CGPA : ");
    scanf("%f",&s2.cgpa);

    if(s1.cgpa>s2.cgpa)
    {
        printf("Name : %s\n",s1.name);
        printf("ID : %d\n",s1.id);
        printf("CGPA : %0.2f\n",s1.cgpa);
    }
    else if(s2.cgpa>s1.cgpa)
    {
        printf("Name : %s\n",s2.name);
        printf("ID : %d\n",s2.id);
        printf("CGPA : %0.2f\n",s2.cgpa);
    }
    else
    {
        printf("Both student has same cgpa");
    }

    return 0;
}
