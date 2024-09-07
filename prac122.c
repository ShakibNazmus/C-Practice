#include<stdio.h>
int main()
{
    char a[100];
    int key,i,count=0;
    printf("Enter string : ");
    gets(a);

    printf("Enter search key : ");
    scanf("%c",&key);

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==key)
        {
            count++;
            break;
        }
    }
    if(count==1)
        printf("Found");
    else
        printf("Not found");

    return 0;
}
