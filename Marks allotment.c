/*marks allotment*/
#include<stdio.h>
void main()
{
    int a;
    printf("enter the number n:\n");
    scanf("%d",&a);
    if ((a>=85)&&(a<100))
        printf("distinction pass");
    else if ((a<85)&&(a>=75))
        printf("A grade");
    else if ((a<75)&&(a>=65))
        printf("B grade");
    else if ((a<65)&&(a>=35))
        printf("C grade");
    else 
        printf("Fail");
    
        
   
}

