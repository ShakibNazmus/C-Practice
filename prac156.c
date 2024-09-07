#include<stdio.h>
int main()
{
    char S1[]="CSE";
    char S2[]="115";
    char S3[]="is fun";
    char S4[100];
    int i=0,j=0;
    while(S1[i]!='\0')
    {
        S4[j]=S1[i];
        i++;
        j++;
    }
    i=0;
    while(S2[i]!='\0')
    {
        S4[j]=S2[i];
        i++;
        j++;
    }
    i=0;
    while(S3[i]!='\0')
    {
        S4[j]=S3[i];
        i++;
        j++;
    }

    puts(S4);

    return 0;
}
