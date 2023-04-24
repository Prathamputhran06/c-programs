#include<stdio.h>
int main()
{
int i ,len=0;
char str[10];
printf("Enter String\n");
scanf("%[^\n]s",str);
for(i=0;str[i];i++)
	len++;
printf("length is:%d",len);
return 0;
}
