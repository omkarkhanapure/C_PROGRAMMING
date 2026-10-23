////////////////
//
//
//
/////////////////

# include <stdio.h>
# include<stdlib.h>


void cheakeven (int iNo)
{
         if((iNo%2)==0)
        {
                printf("it is even number\n");
        }
        else
        {
                printf("it is odd number\n");
        }
}
int main ()
{
        int iValue=0;

        printf("Enter Number:\n");
        scanf("%d",&iValue);

        cheakeven(iValue);


    return EXIT_SUCCESS;
}