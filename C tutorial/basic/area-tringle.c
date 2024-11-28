#include<stdio.h>
int main(){
    float base,height;
    printf("Enter the base and height of Triangle :");
    scanf("%f%f",&base,&height);
    float area=0.5*base*height;
    printf("Area of Triangle :%f",area);
    return 0;
}