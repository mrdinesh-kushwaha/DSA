#include<stdio.h>
int main(){
    int p;
    printf(" Enter the marks percentage :");
    scanf("%d",&p);
    if(p>=75&&p<=100)
    {
        printf("FIRST DEVISION : %d",p);
    }
    if(p>=50&&p<75)
    {
        printf("SECOND DEVISION : %d",p);
    }
    if(p>=33&&p<50)
    {
        printf(" THIRD DEVISION :%d",p);
    }
    if(p<33)
    {
        printf(" FAIL ");
    }
    return 0;
}