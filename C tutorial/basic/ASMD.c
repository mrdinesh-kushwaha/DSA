#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the two number :");
    scanf("%d%d",&a,&b);
   int sum=a+b;
   printf("sum is: %d\n",sum);
   printf("subtraction is : %d\n",a-b);
   printf("Multification is : %d\n",a*b);
   printf("Devision is : %f",(float)a/b);
   return 0;
}