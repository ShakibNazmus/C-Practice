#include<stdio.h>
int indexof(char p[],char ch)
{
    int i;
    for(i=0;p[i]!='\0';i++)
    {
        if(p[i]==ch)
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
    printf("Enter character : ");
    scanf("%c",&ch);

    int index=indexof(s,ch);

    if(index==-1)
    {
        printf("%c not found in string .",ch);
    }
    else
    {
        printf("%c found at index %d",ch,index);
    }

    return 0;
}
