#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    printf(" Natural number 1 to %d \n ",n);
    for(int i=1;i<=n;i++)
    {
        printf("\t %d",i);
    }
    return 0;
}