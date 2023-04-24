#include<stdio.h>
int main()
{
int i,count=0,j;
char str[100],str1[100];
printf("Enter String:\n");
scanf("%[^\n]s",str);
for(i=0;str[i];i++)
{
	count=0;
	if(str[i]==' ')
		continue;
	else
	{
		for(j=0;str[j];j++)
		{
			if(str[i]!=str1[j])
			{
				if(str[i]==str[j])
				{
					count++;
					str1[i]=str[i];
				}
			}
			else
				break;
		}
	}
	if(str[i]==str1[i])
	printf("%c=%d\n",str[i],count);
}
}
