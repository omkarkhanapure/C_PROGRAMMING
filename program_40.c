# include <stdio.h>
# include <stdlib.h>


int main ()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter first number\n");
    scanf("%d\n",&iValue1);

    printf("Enter second Number\n");
    scanf("%d\n",&iValue2);

    if (iValue1>=iValue2)
    {
        printf("Maxmum is :%d",iValue1);
    }
    else
    {
        printf("Maxmum is :%d",iValue2);
    }
    
    return EXIT_SUCCESS;
}