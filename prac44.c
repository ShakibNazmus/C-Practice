#include<stdio.h>
int main()
{
    int c;
    printf("Enter character : ");
    scanf("%c",&c);

    if((c>='a' && c<='z') || (c>='A' && c<='B'))
    {
        printf("Alphabate");
    }
    else
    {
        printf("not a alphabate ");
    }

    return 0;
}
