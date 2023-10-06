#include<stdio.h>
int main()
{
    double r;
    printf("Enter Radius : ");
    scanf("%lf",&r);

    double area = 3.14 * r * r ;

    double circumference = 2 * 3.14 * r;

    printf("\nCircumference : %lf",circumference);
    printf("\nArea : %lf",area);

    return 0;
}