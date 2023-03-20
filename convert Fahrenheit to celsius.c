/*program to convert Fahrenheit into celsius*/
#include <stdio.h>
void main()
{
    float F,C;
    printf("Enter the value in  Fahrenheit\n");
    scanf("%f",&F);
    C=(F-32)*0.555555556;
    printf("The value in  Fahrenheit is given as %f",C);
}


