#include<stdio.h>
int main()
{
    float s1,s2,s3,s4,s5;
    printf("\nEnter English Marks :");
    scanf("%f",&s1);
    
    printf("\nEnter Physics Marks :");
    scanf("%f",&s2);
    
    printf("\nEnter Chemistry Marks :");
    scanf("%f",&s3);
    
    printf("\nEnter Maths Marks :");
    scanf("%f",&s4);
    
    printf("\nEnter Computer Marks :");
    scanf("%f",&s5);

    float sum=s1+s2+s3+s4+s5;
    float p=(sum/5.0);

    printf("Total : %f",sum);
    printf("Percentage : %f",p);
}