#include<stdio.h>
int main()
{
    double n1,n2;
    char ch;
    printf("Enter First Operand : ");
    scanf("%lf",&n1);
    printf("Enter the operator (+, -, *, /): ");
    scanf("%c",&ch);
    printf("Enter Second Operand : ");
    scanf("%lf",&n1);

    double result;

    switch(ch)
    {
        case '+':
            result = n1+n2;
            break;
        
        case '-':
            result = n1-n2;
            break;

        case '*':
            result = n1*n2;
            break;

        case '/':
            if(n2==0)
            {
                printf("Error : can not divide by zero");
            }
            else
            {
                result = n1/n2;
            }
            break;

        default:
            printf("Enter Valid Operator");
    }
    printf("Result : %lf",result);
    return 0;
}