/*Pass and Fail program */
#include<stdio.h>
void main()
{
    int n;
    printf("enter the number n:\n");
    scanf("%d",&n);
    if ((n>=35)&& (n<=100))
    {
        printf("You have succesfully passed \n");
    }
   else if (n<35)
   {
       printf("Work hard next time");
       
   }
   else
   {
       printf("invalid input");
   }
}



