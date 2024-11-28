#include<stdio.h>
int main(){
    int n;
    printf("Enter NUMBER for Table :");
    scanf("%d",&n);
      printf("Table :%d",n);
    for(int i=1;i<=10;i++)
   
    {
       
        printf("\n%d ",n*i);
    }
    return 0;
}