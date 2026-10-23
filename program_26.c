# include <stdio.h>
# include <stdlib.h>

int main ()
{

    char SName[30];
    printf("Enter your name :\n");
    scanf("%[^'\n']s",SName);

    printf("Welcome %s\n ",SName);

    return EXIT_SUCCESS;
}