#include <stdio.h>

int main() {
    double a,b;
    char ch;

    printf("Enter the first operand: ");
    scanf("%lf", &a);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &ch);

    printf("Enter the second operand: ");
    scanf("%lf", &b);

    double result;

    switch (ch) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if(b!=0){
                result = a/b;
            }
            else{
                printf("Error : can not divide by zero");
            }
            break;
        default:
            printf("Invalid operator.\n");
            return 1;
    }

    printf("Result: %lf\n",result);
    return 0;
}