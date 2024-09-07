#include<stdio.h>
void search(char arr[],char key)
{
    int i,count=0;

    for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==key)
        {
            count++;
            break;
        }
    }
    if(count==1)
        printf("Found");
    else
        printf("Not found");
}
int main()
{
    char arr[100],key;
    printf("Enter string : ");
    gets(arr);

    printf("Enter search key : ");
    scanf("%c",&key);

    search(arr,key);

    return 0;
}

