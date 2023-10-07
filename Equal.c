#include<stdio.h>
int main()
{
    double a,b;

    printf("Enter A : ");
    scanf("%lf",&a);
    printf("Enter B : ");
    scanf("%lf",&b);

    if(a==b)
    {
        printf("Both are Equal");
    }
    else
    {
        printf("Both are not Equal");
    }
    return 0;
}