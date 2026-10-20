# include <stdio.h>
# include <stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FASLE 0

BOOL Check(int iNo)
{

    if ((iNo % 5)==0)
    {
        return TRUE;
    }
    else
    {
        return FASLE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet= FASLE;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet= Check(iValue);

    if (bRet==TRUE)
    {
        printf("Divisible By 5\n");
    }
    else{


        printf ("Number is Not Divisible\n");
    }
    return EXIT_SUCCESS;
}