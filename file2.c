#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char name[20]="Nazmus Shakib";
    int length = strlen(name);
    int i;
    file=fopen("test.text","w");

    if(file==NULL)
        printf("File doesnt exixt");
    else
        {
            printf("File is open\n");
            for(i=0;i<length;i++)
            {
               fputc(name[i],file);
            }
             printf("File is written successfully");
            fclose(file);
        }
    return 0;
}
