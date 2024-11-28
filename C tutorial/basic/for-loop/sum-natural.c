#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("Natural number 1 to %d \n ",n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
        printf("\t%d",i);
    }
    printf("\n");
    printf("Sum is : %d \n",sum);
    return 0;
}
