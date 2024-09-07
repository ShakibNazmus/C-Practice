#include<stdio.h>
int main()
{
    char S4[]="CSE115is fun";
    int i=0,j=0;
    char S[100];
    while(S4[i]!='\0')
    {
        if(S4[i]=='a' || S4[i]=='e' || S4[i]=='i' || S4[i]=='o' || S4[i]=='u' || S4[i]=='A' || S4[i]=='E' || S4[i]=='I' || S4[i]=='O' || S4[i]=='U')
        {
            S4[i]='$';
        }
        S[j]=S4[i];
        i++;
        j++;
    }
    puts(S);

}
