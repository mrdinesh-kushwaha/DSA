#include<stdio.h>
int main(){
    float amount,interest,time;
    printf("Enter the amount :\n");
    scanf("%f",&amount);
    printf("Enter the interest :\n");
    scanf("%f",&interest);
    printf("Enter the time in years \n");
    scanf("%f",&time);

    float t=(amount*interest*time)/100;
    printf("Simple interest is : %f",t);
    return 0;
}



