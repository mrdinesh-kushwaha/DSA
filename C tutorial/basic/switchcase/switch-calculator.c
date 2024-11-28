#include<stdio.h>
int main(){
    char ch;
    float x,y;
    printf("Enter two number :");
    scanf("%f%f",&x,&y);
    printf("Enter the opertor :");
    scanf("\n%c",&ch);
    switch(ch)
    {
        case '+':
        printf("ADD is : %.3f",(x+y));
        break;
        case '-':
        printf("SUb is : %.3f",(x-y));
        break;
        case '*':
        printf("Mul is : %.3f",(x*y));
        break;
        case '/':
        printf("division is : %.3f",(x/y));
        break;
        default :printf("Entered Invalid Operator ");

    }
    return 0;
}