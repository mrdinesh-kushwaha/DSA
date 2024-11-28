#include<stdio.h>
int main()
{
    int no,t;
    printf("Enter the number:");
    scanf("%d",&no);
    printf("Reverse is :");
    while(no!=0){
        t=no%10;
        printf("%d",t);
        no=no/10;
    }
return 0;

}