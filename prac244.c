#include<stdio.h>
struct employee
{
    char name[20];
    int bday;
    int bmonth;
    int byear;
    int jday;
    int jmonth;
    int jyear;
    int salary;
};
int main()
{
   struct employee e[4];
   for(int i=0;i<4;i++)
   {
       printf("Enter information of employee : %d\n",i+1);
       printf("Enter name : ");
       fflush(stdin);
       gets(e[i].name);
       printf("Date of birth : ");
       scanf("%d/%d/%d",&e[i].bday,&e[i].bmonth,&e[i].byear);
       fflush(stdin);
       printf("Joining date : ");
       fflush(stdin);
       scanf("%d/%d/%d",&e[i].jday,&e[i].jmonth,&e[i].jyear);
       printf("Salary : ");
       fflush(stdin);
       scanf("%d",&e[i].salary);

   }

   int maxsalary=0;

   for(int i=1;i<4;i++)
   {
       if(e[i].salary>e[maxsalary].salary)
       {
           maxsalary=i;
       }
   }
   printf("Enter the information of employee with highest salary : \n");
   printf("Name : %s\n",e[maxsalary].name);
   printf("Date of birth : %d/%d/%d\n",e[maxsalary].bday,e[maxsalary].bmonth,e[maxsalary].byear);
   printf("Date of birth : %d/%d/%d\n",e[maxsalary].jday,e[maxsalary].jmonth,e[maxsalary].jyear);
   printf("Salary : %d",e[maxsalary].salary);

   return 0;
}
