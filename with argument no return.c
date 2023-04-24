// with argument no return type
#include <stdio.h>
sum(int,int);

void main() {
    int a,b;
    printf("enter thevalues");
    scanf("%d%d",&a,&b);
    sum(a,b);
    
}
sum(int x,int y)
{
    int s;
    s=x+y;
    printf("sum is %d",s);
    
}
