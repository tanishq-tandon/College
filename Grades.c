#include<stdio.h>
int main()
{
    int g;
    printf("Enter Grades : ");
    scanf("%d",&g);
    if(g>90 && g<=100)
    {
        printf("Grade A");
    }
    else if(g>80 && g<=90)
    {
        printf("Grade B");
    }
    else if(g>60 && g<=80)
    {
        printf("Grade C");
    }
    else if(g>0 && g<=60)
    {
        printf("Grade D");
    }
    else
    {
        printf("Enter Valid Marks and try again.");
    }
    return 0;
}