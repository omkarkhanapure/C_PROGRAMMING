#include <stdio.h>
#include <stdlib.h>

int main ()
{
        
        int no = 0;

        printf("Enter Number : \n");
        if(
        scanf("%d",&no) !=1)
        {
            printf("Invild input");
            
            return EXIT_FAILURE;
        }

        printf("input is vild");

        

    return EXIT_SUCCESS;
}