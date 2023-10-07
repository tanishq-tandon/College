#include<stdio.h>
int main()
{
    double c,f;
    printf("Enter Temperature in Celsius : ");
    scanf("%lf",&c);
    f=((c/5)*9)+32;

    printf("Temperature in Fahrenheit : %lf",f);

    return 0;
}