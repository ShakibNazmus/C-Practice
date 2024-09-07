int main()
{
    int ch;
    printf("Enter alphabet : ");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("%c is an alphabet",ch);
    }
    else if(ch>='0' && ch<='9')
    {
        printf("%c is a digit",ch);
    }
    else
    {
        printf("%c is an especial character",ch);
    }
    return 0;
}

