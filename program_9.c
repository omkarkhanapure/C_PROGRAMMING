# include <stdio.h>
#include  <stdlib.h>

//////////////////////////
// 
//  function name : Addition
//  Input :integer,integer
//  Output :integer
//  Descroption:performs Addition 
//  Date : 04/10/2026
//  Author : Omkar Shrikant Khanapure
//
//////////////////////////

int Addition(int iNo1, int iNo2)
{
            int iAns=0;
            iAns=iNo1+iNo2;    /// busieen loige

    return iAns;

}

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
            scanf("%d",&iValue1);

            printf("Enter Second Number\n");
            scanf("%d",&iValue2);

            iResult=Addition(iValue1,iValue2);

            printf("Addition is : %d \n",iResult);

    return  EXIT_SUCCESS;
}
//////////////////////////
////  step 5 - Test the Code
///
///     tested test case
/// -------------------------------------      
/// input1      Input2      Ouput
/// -------------------------------------
///   10           11          21
///   11           0          11
///   0            11          11
///  -11           0           -11
///   0            -11          -11
///    -11          -9             -20 