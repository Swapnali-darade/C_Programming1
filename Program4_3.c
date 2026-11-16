#include<stdio.h>
#include<stdlib.h>


void FindGreater(int iFirst, int iSecond)
{
     if(iFirst > iSecond)
     {
        printf("%d is Greater\n",iFirst);
     }
     else if(iSecond> iFirst){
        printf("%d Number is Greater",iSecond);
     }
     else if(iFirst == iSecond)
     {
        printf("both are equal\n");
     }
}


int main()
{
    int iValue1=0;
    int iValue2=0;


    printf("Enter Two Numbers :\n"); 

    scanf("%d %d",&iValue1,&iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;

}