#include<stdio.h>
int findocc(char s[],char ch)
{
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==ch)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    char s[20],ch;
    printf("Enter string : ");
    gets(s);
    printf("Enter character to find : ");
    scanf("%c",&ch);

    int d=findocc(s,ch);

    if(d==-1)
    {
        printf("character not found");
    }
    else
    {
        printf("%c first occur at %d",ch,d);
    }

    return 0;
}
