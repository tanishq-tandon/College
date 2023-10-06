#include<stdio.h>
int main()
{

    int a,b,c;
    printf("Enter A : ");
    scanf("%d",&a);

    printf("Enter B : ");
    scanf("%d",&b);
    
    c=a;    // Swapping
    a=b;
    b=c;

    printf("\nA : %d",a);
    printf("\nB : %d",b);
    
    return 0;
}