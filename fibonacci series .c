//fibonacci series
#include <stdio.h>

int sum_of_n_natural_numbers(int n) {
   if (n==0)
   return 0;
   else if(n==1)
   return 1;
   else
   return sum_of_n_natural_numbers(n-1)+sum_of_n_natural_numbers(n-2);
}

int main() {
    int n,i;
    printf("enter the number\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
    printf("the fibonacci number is %d\n",sum_of_n_natural_numbers(i) );
    }
}

