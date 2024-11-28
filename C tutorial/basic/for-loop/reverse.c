#include<stdio.h>
int main(){
    int n,p,rev=0;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("Reverse is :");
   while(n!=0)
   {
    p=n%10;
     rev=rev*10+p;
     n/=10;
   }
   printf(" %d",rev);
   return 0;
}