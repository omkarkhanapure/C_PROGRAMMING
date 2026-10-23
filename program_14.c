#include "header.h"

//////////////////////////
//
//  Entry point of function
//
//
//////////////////////////

int main ()
{
    int iValue1=0,iValue2=0, iResult = 0;

                printf("Enter first number\n");
    
                if (scanf("%d",&iValue1) !=1)
        {
                fprintf(stderr,"Unable to proceded as input is invaild");
            
                return EXIT_FAILURE;
        }

            

                printf("Enter Second Number\n");
                if (scanf("%d",&iValue2) !=1)
        {
                fprintf(stderr,"Unable to proceded as input is invaild");
            
                return EXIT_FAILURE;
        }


            iResult= addition(iValue1,iValue2);

            printf("Addition is : %d \n",iResult);

    return  EXIT_SUCCESS;
}