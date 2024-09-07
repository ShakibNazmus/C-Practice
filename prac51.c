int main()
{
    int a,b,c;
    printf("Enter sides : ");
    scanf("%d %d %d",&a ,&b ,&c);


    if(a==b && b==c)
    {
        printf("Equileteral");
    }
    else if(a==b || b==c || a==c)
    {
        printf("Isosceles");
    }
    else
    {
        printf("Scalen ");
    }

    return 0;
}
