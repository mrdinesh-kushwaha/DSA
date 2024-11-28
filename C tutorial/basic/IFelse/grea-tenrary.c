#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three number :");
    scanf("%d%d%d",&a,&b,&c);
 int lar=a>b?(a>c?printf("a is largest :"):printf("c is largest :")):(b>c?printf("b is lar "):printf("c is lar :"));

  return 0;
}