#include<stdio.h>
#include<stdlib.h>


void CheckVotingEligibilty(int iAge)
{
    if(iAge >= 18)
    {
        printf("Eligible for Voting");
    }
    else if(iAge < 18)
    {
        printf("Not Eligible for Voting");

    }
    else if(iAge<=0){
        printf("Invalid Age");
    }
}

int main()
{
    int iAge=0;

    printf("Enter Your Age :\n");
    scanf("%d",&iAge);
    CheckVotingEligibilty(iAge);

    return EXIT_SUCCESS;
}