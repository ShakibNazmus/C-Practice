#include<stdio.h>
int main()
{
    char a[100];
    int i,al=0,de=0,ot=0;
    printf("Enter string : ");
    gets(a);

    while(a[i]!='\0')
    {
        if((a[i]>='a' && a[i]<='z')||(a[i]>='A' && a[i]<='Z'))
            al++;
        else if(a[i]>='0' && a[i]<='9')
            de++;
        else
            ot++;
        i++;
    }
    printf("Alphabet : %d",al);
    printf("degit : %d",de);
    printf("other : %d",ot);



    return 0;
}
