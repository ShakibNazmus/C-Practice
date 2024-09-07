#include<stdio.h>
int main()
{
    char s1[50];
    printf("Enter string : ");
    gets(s1);

    char s2[50];
    printf("Enter string : ");
    gets(s2);

    int count=0,i=0;

    while(s1[i]!='\0' || s2[i]!='\0')
    {
        if(s1[i]!=s2[i])
        {
            count++;
            break;
        }
        i++;
    }

    if(count==0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;

}
