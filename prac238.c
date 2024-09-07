#include<stdio.h>
#include<stdlib.h>
struct number
{
    int n1,n2,n3;
};
int main()
{
    struct number num;
    int i;
    FILE *add;
    add=fopen("input.bin","wb");
    for(i=0;i<2;i++)
    {
        num.n1=5;
        num.n2=6;
        num.n3=num.n1+num.n2;
        fwrite(&num,sizeof(num),1,add);
    }
    fclose(add);
    add=fopen("input.bin","rb");
    for(i=0;i<2;i++)
    {
        fread(&num,sizeof(struct number),1,add);
    }
    printf("%d\n",num.n3);
    fclose(add);

    return 0;

}
