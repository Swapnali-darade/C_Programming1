
#include<stdio.h>
#include<stdlib.h>

void CheckNumbers(int iValue)
{
    if(iValue > 0)
    {
        printf("Number is Positive");
    }
    else if(iValue< 0)
    {
        printf("Number is Negative");
    }
    else if(iValue == 0)
    {
        printf("Number is Zero");
    }
}

int main()
{
    int iValue=0;


    printf("Enter a Number:");

    scanf("%d",&iValue);

    CheckNumbers(iValue);

        return 0;
}