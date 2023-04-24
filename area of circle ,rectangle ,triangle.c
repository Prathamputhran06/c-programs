#include <stdio.h>
#define pi 3.142

void  main() {
    float rad,len,bred,base,heg,area;
    int ch;
    printf("enter all the required input radius,length,bredth,base,heghit,choice\n respectively\n");
    printf("select \n 1 for circle area\n 2 for rectangle area\n 3 for triangle\n");
    scanf("%f%f%f%f%f%d",&rad,&len,&bred,&base,&heg,&ch);
    switch(ch)
    {
        case 1:area=pi*rad*rad;
                printf("area of a circle is %f",area);
                break;
        case 2:area=len*bred;
                printf("area of a rectangle is %f",area);
                break;
        case 3:area=(base*heg)/2;
                printf("area of a triangle is %f",area);
                break;
        default:printf("invalid input");
    }
}

