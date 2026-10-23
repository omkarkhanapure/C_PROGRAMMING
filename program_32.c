# include <stdio.h>
# include <stdlib.h>

int main ()
{

    char SName[30];
    int iAge=0;
    float fMarks =0.0f;

    printf("Enter your name :\n");
    scanf("%[^'\n']s",SName); /// enter remains in input buffer

    fflush(stdin);
    
    printf("Enter your age :\n");
    scanf("%d",&iAge);

    printf("Enter your marks ");
    scanf("%f",&fMarks);

    printf("Welcome %s\n ",SName);
    printf("your Age is :%d\n",iAge);
    printf("your marks : %f\n",fMarks);

    return EXIT_SUCCESS;
}