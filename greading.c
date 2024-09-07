#include<stdio.h>
int main()
{
    int n;
    printf("Enter the result : ");
    scanf("%d",&n);
    if(n>=93)
    {
        printf("The result is : A excelent");
    }
    else if(n>=90 && n<=92)
    {
        printf("The result is : A-");
    }
    else if(n>=87 && n<=89)
    {
        printf("The result is : B+");
    }
    else if(n>=83 && n<=86)
    {
        printf("The result is : B Good");
    }
    else if(n>=80 && n<=82)
    {
        printf("The result is : B- ");
    }
    else if(n>=77 && n<=79)
    {
        printf("The result is : C+ ");
    }
    else if(n>=73 && n<=76)
    {
        printf("The result is : C Average ");
    }
    else if(n>=70 && n<=72)
    {
        printf("The result is : C- ");
    }
    else if(n>=67 && n<=69)
    {
        printf("The result is : D+ ");
    }
    else if(n>=60 && n<=66)
    {
        printf("The result is : D Poor ");
    }
    else if(n<60)
    {
        printf("The result is : F* Failure ");
    }
    else
    {
        printf("Result can not found");
    }




    return 0;
}
