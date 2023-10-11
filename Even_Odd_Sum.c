#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    int es=0,os=0;
    for(int i=1;i<n;i++)
    {
        if(n%2==0)
        {
            es=es+i;
        }
        else
        {
            os=os+i;
        }
    }
    printf("Even Sum : %d",es);
    printf("\nOdd Sum : %d",os);
    return 0;
}