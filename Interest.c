#include<stdio.h>
#include<math.h>
int main()
{
    double P;
    double T;
    double R;

    printf("Enter Principal Amount : ");
    scanf("%lf",&P);

    printf("Enter Time Period : ");
    scanf("%lf",&T);

    printf("Enter Rate of Interest : ");
    scanf("%lf",&R);

    double si=((P*T*R)/100.0);  //Calcuating Simple Interest
    printf("\nSimple Interest : %lf",si);

    double ci = ((P*pow(1+(R/100),T))-P);
    printf("\nCompound Interest : %lf",ci);
    
    return 0;
}