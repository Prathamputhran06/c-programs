// with argument with return type
#include <stdio.h>
sum(int,int);

void main() {
    int a,b,s;
    printf("enter thevalues");
    scanf("%d%d",&a,&b);
    s=sum(a,b);
    printf("sum is %d",s);
}
sum(int x,int y)
{
    return(x+y);
    
}
