#include<stdio.h>
int main(){
    int age;
    printf("ENTER YOUR AGE :");
    scanf("%d",&age);
    if(age>=18)
    {
        printf(" YOU ARE ELIGIBLE FOR VOTING : %d",age);

    }
    else{
      printf(" YOU ARE NOT ELIGIBLE :");
    }
}