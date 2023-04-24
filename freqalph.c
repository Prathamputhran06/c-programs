#include<stdlib.h>
#include<stdio.h>
void frequency(char *q,int A,int a)
{
int count=0;
while(*q)
{
	if(*q==A || *q==a)
		count++;
	q++;
}
if(count)
{
	printf("%c(%d)\t",A,count);
}
}
int main()
{
char *p=(char*)malloc(100*sizeof(char));
int A=65,a=97;
printf("Enter String:");
scanf("%[^\n]s",p);
for(;A<=90;A++,a++)
	frequency(p,A,a);
return 0;
}
