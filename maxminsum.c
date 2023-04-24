 #include<stdio.h>
void small(int arr[],int n)
{
int j,temp,min=arr[0],max=arr[0],sum=0;

for(j=0;j<n;j++)
{
	if(min>arr[j])
		{
		min=arr[j];
		sum=sum+arr[j];
		}
	if(max<arr[j])
		max=arr[j];
}
printf("maximum sum is:%d",sum-min);
printf("minimum sum is :%d",sum-max);
}

int main()
{
int arr[50],i,n;
printf("Enter the array elements");
scanf("%d",&n);
for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
small(arr,n);
}
