// perfect square numbers in array
#include <stdio.h>
#include<math.h>
int main() {
    // Write C code here
  int s1;
  int n,i;
  int a[100];
  
 
   
    printf("enter the array size\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
    s1=sqrt(a[i]);
    if(s1*s1==a[i])
    {
     printf("the perfect square numbers are%d\n",a[i]);
    }
    }
  
   
}
