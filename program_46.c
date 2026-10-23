# include <stdio.h>
# include <stdlib.h>

float Arvege (int iNo1,int iNo2 , int iNo3 )
{
    float fAns =0.0f;

    // type casting
    fAns=((float)iNo1+(float)iNo2)+((float)iNo3)/3;

    return fAns;
}
int main ()
{
    int iValue1=0,iValue2=0,iValue3;
    
    float fResult=0.0f;

    printf("Enter first number\n");
    scanf("%d",&iValue1);

    printf("Enter second Number\n");
    scanf("%d",&iValue2);

    printf("Enter thrid Number\n");
    scanf("%d",&iValue3);

    fResult= Arvege(iValue1,iValue2,iValue3);
    printf("Arvege is  is :%f\n",fResult);
    
    return EXIT_SUCCESS;
}