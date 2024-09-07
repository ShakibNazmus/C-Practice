#include<stdio.h>
struct books
{
    char title[20];
    int id;
    char author[20];
};
void pnt(struct books b)
{
    printf("Title : %s\n",b.title);
    printf("Id : %d\n",b.id);
    printf("Author : %s\n",b.author);
}
int main()
{
    struct books b1,b2;
    printf("Enter information of book 1 \n");
    printf("Enter title : ");
    fflush(stdin);
    gets(b1.title);
    printf("Enter id : ");
    scanf("%d",&b1.id);
    fflush(stdin);
    printf("Enter author : ");
    gets(b1.author);

    printf("Enter information of book 2 \n");
    printf("Enter title : ");
    fflush(stdin);
    gets(b2.title);
    printf("Enter id : ");
    scanf("%d",&b2.id);
    fflush(stdin);
    printf("Enter author : ");
    gets(b2.author);

    printf("Information of book 1 : \n");
    pnt(b1);
    printf("Information of book 2 : \n");
    pnt(b2);

    return 0;

}
