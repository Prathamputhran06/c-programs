//Program to print largest of 3 numbers
include<stdio.h>
void main()
{
    float a,b,c;
    printf("enter the number n:\n");
    scanf("%f%f%f",&a,&b,&c);
    if (a>b)
    {
        if(a>c)
        {
        printf("a is larger \n");
        }
        else 
        {
          printf("c is larger\n") ; 
        }
    }
   else {
   if (b<c)
   {
       printf("c is larger\n");
   }
   else 
   {
       printf("b is larger\n");
   }
   }
   
}
