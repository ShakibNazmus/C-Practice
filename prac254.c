#include<stdio.h>
void copy(char *a,char *b)
{
    int i=0,j=0;
    while(a[i]!='\0')
    {
        b[j]=a[i];
        j++;
        i++;
    }
    b[j]='\0';
    puts(b);
}
int main()
{
   char x[100], y[100];
   printf("Enter string : ");
   gets(x);
   copy(x,y);
   return 0;

}
