#include<stdio.h>
int main ()
{
    int i,n,num,pos;
    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n];
    int b[i];
    printf("Enter elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }



    printf("Enter position : ");
    scanf("%d",&pos);

    if(pos<0  || pos>n)
        printf("invalid");
    else
    {
        for(i=pos-1;i<n-1;i++){
            a[i]=a[i+1];
        }

        n--;
        printf("Array after delete : ");
        for(i=0;i<n;i++)
        {
            printf("%d",a[i]);
        }
    }




    return 0;
}
