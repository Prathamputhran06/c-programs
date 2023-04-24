//swaping to numbers

#include <stdio.h>
void swap(int *,int*);
main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    printf("values before swapping\n");
    printf("a=%d\n",a);
     printf("b=%d\n",b);
     swap(&a,&b);
      printf("values after swapping\n");
      printf("a=%d\n",a);
     printf("b=%d\n",b);
}
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}

