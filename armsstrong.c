#include<stdio.h>
#include<math.h>
int main()
{
int n,count=0,rem,temp,sum=0;
printf("Enter the number");
scanf("%d",&n);
temp=n;
while(n!=0)
{
count++;
n=n/10;
}
rem=0;
n=temp;
while(n!=0)
{
rem=n%10;
sum=sum+(int)pow(rem,count);
n=n/10;
}
if(sum==temp)
	printf("It is a armsstrong number\n");
else
	printf("Not a armsstrong Number\n");
return 0;
}
