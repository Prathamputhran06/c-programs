// print sum first n numbers
#include <stdio.h>
void main() {
    int i,n;
    int sum;
    printf("enter the number\n");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        sum+=i;
        printf("%d\n",sum);
    }
}
     
     
    
