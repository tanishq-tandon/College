#include<stdio.h>
int main()
{
    int y;
    printf("Enter a Year : ");
    scanf("%d",&y);

    if(y%4==0 && y%400!=0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }
}