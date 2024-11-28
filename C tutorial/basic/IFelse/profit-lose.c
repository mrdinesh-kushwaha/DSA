#include<stdio.h>
int main(){
    float cp,sp,profit,loss;
    printf("Enter the selling price :\n");
    scanf("%f",&sp);
    printf("Enter the cost price : \n ");
    scanf("%f",&cp);
    if(sp>cp){
    profit=sp-cp;
    printf(" Profit is : %f \n",profit);
    }
    else
{
    loss=cp-sp;
    printf("loss is : %f \n",loss);
}
    return 0;
}