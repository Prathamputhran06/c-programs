#include<stdio.h>
int main()
{
int n,temp,i;
printf("enter the number\n");
scanf("%d",&n);
temp=n;
//n=n/2;
for(i=2;i<n;i++)
{
if(temp%i==0){
	printf("The number is not prime");
	break;
	}
else {
	printf("The number is prime");
	break;
}
}
}
