// solution of a quadratic number
#include <stdio.h>
#include<math.h>
void main() {
    float b,a,c,d,r1,r2;  
    printf("enter the input\n");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if (d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        
        
        printf("roots are real%f\n%f",r1,r2);
    }
    else if (d<0){
        printf("the values are imaginary");
        
    } 
    else
     {
         r1=(-b)/(2*a);
         printf("the roots are equal %f",r1);
     }
    
    
    
    }
