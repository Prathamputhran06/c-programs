// square root without math functions
#include <stdio.h>
#include<math.h>
void main() {
    int num;
    float temp,s;
    printf("enter the value\n");
    scanf("%d",&num);
    s=num/2;
    temp=0;
    while(s!=temp)
    {
        temp=s;
        s=(num/temp+temp)/2;
    }
    
    printf("square rooot is %f",s);
    }
