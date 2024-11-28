#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the two number :");
    scanf("%d%d",&a,&b);
    printf("Before sapping a=%d and b=%d \n",a,b);
    int t=a+b;
    a=t-a;
    b=t-b;
    printf("After swapping a=%d and b=%d ",a,b);
    return 0;
}