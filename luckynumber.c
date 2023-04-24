#include<stdio.h>
int main()
{
int n;
printf("enter the number\n");
scanf("%d",&n);
if(n%9==0)
	printf("9 is the Lucky Number");
else
	printf("%d\n",n%9);
}
