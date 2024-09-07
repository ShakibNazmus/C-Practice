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
    else if(c>='0' && c<='9')
    {
        printf("Digit");
    }
    else
    {
        printf("special character ");
    }

    return 0;
}

