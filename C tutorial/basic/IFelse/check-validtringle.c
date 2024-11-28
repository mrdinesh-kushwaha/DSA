#include<stdio.h>
int main(){
    int a1,a2,a3;
    printf("Enter the first angle :  \n");
    scanf("%d",&a1);
    printf("Enter second angle (in degree) \n");
    scanf("%d",&a2);
    printf("Enter 3rd angle(in degree) \n");
    scanf("%d",&a3);
if((a1+a2+a3)==180)
{
    printf(" VALID Tringle : %d",(a1+a2+a3));

}
else
{
    printf(" NOT valid Tringle : %d",(a1+a2+a3));
}
return 0;
}