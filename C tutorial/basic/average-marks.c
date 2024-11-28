#include<stdio.h>
int main(){
    int phy,chem,math,bio,science;
    printf("Enter the marks of each subject PHy,CHEM,MATH,BIO,SCIENCE :");
    scanf("%d%d%d%d%d",&phy,&chem,&math,&bio,&science);
float aveg=(phy+chem+math+bio+science)/5.0;
    printf("Average of marks is :%f \n",aveg);
    printf("Percentange of marks : %f",aveg);
    return 0;
}
