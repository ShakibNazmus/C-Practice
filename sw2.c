#include<stdio.h>
int main()
{
    int ch;
    printf("Enter character : ");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':

        printf("Vowel");
        break;
    default:
        printf("Invalid");
    }
    return 0;
}
