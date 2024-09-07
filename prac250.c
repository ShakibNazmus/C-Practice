#include<stdio.h>
struct number
{
    int n1,n2,n3;
};
int main()
{
    struct number num;
    FILE *file;
    file=fopen("tst.bin","wb");
    for(int i=0;i<2;i++)
    {
        num.n1=5;
        num.n2=6;
        num.n3=num.n1+num.n2;
        fwrite(&num,sizeof(struct number),1,file);
    }
    fclose(file);
    file=fopen("tst.bin","rb");
    for(int i=0;i<2;i++)
    {
       fread(&num,sizeof(struct number),1,file);
    }
    printf("Sum = %d",num.n3);
    fclose(file);
    return 0;

}
