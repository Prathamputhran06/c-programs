// roundoff an arry using ceil
#include <stdio.h>
#include<math.h>
void main() {
    
    float a[100];  
    int i;
    
    printf("enter the array values");
    for(i=0;i<5;i++)
        scanf("%f",&a[i]);
    for(i=0;i<5;i++)
        a[i]=ceil(a[i]);
        
        
    printf("array values are");  
    for(i=0;i<5;i++)   
            printf(" %f",a[i]);
    
    
        
   

    
    
    }
