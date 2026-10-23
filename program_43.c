# include <stdio.h>
# include <stdlib.h>

int Mumimium (int iNo1,int iNo2 )
{
     if (iNo1<iNo2)
    {
        return iNo1;
    }
    else
    {
       return iNo2;
    }
    
}
int main ()
{
    int iValue1=0;
    int iValue2=0;
    int iResult=0;

    printf("Enter first number\n");
    scanf("%d",&iValue1);

    printf("Enter second Number\n");
    scanf("%d",&iValue2);

    iResult= Mumimium(iValue1,iValue2);
    printf("mumimum is :%d\n",iResult);
    
    return EXIT_SUCCESS;
}