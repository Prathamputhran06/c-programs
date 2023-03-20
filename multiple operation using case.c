/*multiple operation using case statement*/
#include <stdio.h>

void main() {
    int choice;
    float a,b,c;
    printf("enter the inputs\n");
    scanf("%f%f",&a,&b);
    printf("enter the inputs\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:c=a+b;
            printf("%f",c);
            break;
        case 2:c=a-b;
            printf("%f",c);
            break;
        case 3:c=a*b;
            printf("%f",c);
            break;
         case 4:c=a/b;
            printf("%f",c);
            break;
        default :printf("invalid input");
        
    }
   
}
