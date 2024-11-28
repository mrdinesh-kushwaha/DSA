#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three number :");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf(" a is largest :");

    }
    if(b>a&&b>c)
    {
        printf("b is Largest :");
    }
    if(c>a&&c>b)
    {
        printf("c Is LArgest :");
    }
    return 0;




}