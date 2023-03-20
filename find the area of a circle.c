/*find the area of a circle*/
#include<stdio.h>
#define pie 3.14
void main()
{
    float r,Area;
    printf("enter the radius\n");
    scanf("%f",&r);
    Area=pie*r*r;
    printf("Area of a circle is%f",Area);
    
}
