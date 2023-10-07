#include<stdio.h>
int main()
{
    double a,b,c;

    printf("Enter A : ");
    scanf("%lf",&a);
    printf("Enter B : ");
    scanf("%lf",&b);
    printf("Enter C : ");
    scanf("%lf",&c);

    if(a>b && a>c)
    {
        printf("%lf is greatest",a);
    }
    else if(b>a && b>c)
    {
        printf("%lf is greatest",b);
    }
    else 
    {
        printf("%lf is greatest",c);
    }
}