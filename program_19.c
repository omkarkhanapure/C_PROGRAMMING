# include <stdio.h>
# include<stdlib.h>
# include <stdbool.h>


bool cheakeven (int iNo)
{
         if((iNo%2)==0)
        {
                return true;
        }
        else
        {
                return false;
        }
}
int main ()
{
        int iValue=0;
        bool bRet = false;

        printf("Enter Number:\n");
        scanf("%d",&iValue);

        bRet= cheakeven(iValue);

        if (bRet==true)
        {
                printf("it is even number\n");
        }
        else 
        {
                printf("it is odd number\n");
        }

    return EXIT_SUCCESS;
}