#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two number :");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("a>b is %d ",a);

    }
    else{
        printf("b>a is %d",b);

    }
    return 0;
}