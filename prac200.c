#include<stdio.h>
int main()
{
    char s[20],ch;
    printf("Enter : ");
    gets(s);
    int i=0,vowel=0,con=0,digit=0,other=0,word=0;
    while((ch=s[i])!='\0')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch==' A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            vowel++;
        }
        else if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
        {
            con++;
        }
        else if((ch>='0' && ch<='9'))
        {
            digit++;
        }
        else if(ch==' ')
        {
            word++;
        }
        else
        {
            other++;
        }

        i++;
    }
    word++;

    printf("\nVowel = %d",vowel);
    printf("\nConsonant = %d",con);
    printf("\nDigit = %d",digit);
    printf("\nWord = %d",word);
    printf("\nOther = %d",other);
    return 0;
}
