#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a chracter : ");
    scanf("%c",&ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("%c is a vowel\n",ch);
    }
    else
    {
        printf("%c is consonant\n",ch);
    }

    return 0;



}




