/*
    step 1 - understand the problem statement 
    step 2 - Write the algoithm
    step 3 - Decide programming language
    step 4 - Write the code
    step 5 - Test the Code
*/


//////////////////////////
//
// step 1 - understand the problem statement
//          user is going to enter any 2 number 
//          And we preform addition
/////////////////////////

//////////////////////////
//
// step 2 - Write hte algitm
/*
    start 
        accept first no as No1
        accept second no as No2
        create ans to store result
        perform addition and store in ans 
        display result on screen
    stop

*/
/////////////////////////

/////////////////////////
// 
// step 3 - Decide programming language
//      selected language c 
/////////////////////////

////////////////////////
//
// step 4 - Write the code
///////////////////////

# include <stdio.h>

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

    return 0;
}