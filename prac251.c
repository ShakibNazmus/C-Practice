#include<stdio.h>
struct number
{
    float n1,n2,n3;
    float n4;
};
int main()
{
    struct number num;
    FILE *fp;
    fp=fopen("new.bin","wb");
    for(int i=0;i<2;i++)
    {
        num.n1=5;
        num.n2=6;
        num.n3=num.n1+num.n2;
        num.n4=num.n3/2;
        fwrite(&num,sizeof(num),1,fp);
    }
    fclose(fp);
    fp=fopen("new.bin","rb");
    for(int i=0;i<2;i++)
    {
        fread(&num,sizeof(struct number),1,fp);
    }
    printf("Average : %0.2f",num.n4);
    fclose(fp);
    return 0;
}
