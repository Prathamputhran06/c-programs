// sum and avg of array elements
#include <stdio.h>

int main() {
    // Write C code here
  float n;
   float a[100];
   int i;
   float sum=0;
   float avg;
   
    printf("enter the array size\n");
    scanf("%f",&n);
    printf("enter the array elements\n");
    for(int i=0;i<n;i++)
    scanf("%f",&a[i]);
    for(int i=0;i<n;i++){
    sum+=a[i];}
    avg=sum/n;
     printf("the sum and average are %f\n%f",sum,avg);
   
  
   
}
