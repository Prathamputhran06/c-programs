#include<stdio.h>
void main(){
    int n,t,rev;
    printf("enter the number");
    scanf("%d",&n);
    t=n;
    while(t>0){
        int d=t%10;
        rev=rev*10+d;
        t=t/10;
       
    }
    if(n==rev){
        printf("palindrome");
    }
    else{
        printf("not");
    }
}

