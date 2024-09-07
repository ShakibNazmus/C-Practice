#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;

    file=fopen("test.text","w");

    if(file==NULL)
        printf("File doesnt exixt");
    else
        {
            printf("File is open\n");

            fclose(file);
        }
    return 0;
}
