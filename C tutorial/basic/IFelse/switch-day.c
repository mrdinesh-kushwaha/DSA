#include<stdio.h>
int main(){
    int day;
    printf("Enter the number between 1 -7 : ");
    scanf("%d",&day);
    switch(day)
    {
        case 1:printf("MONDAY");
        break;
        case 2:printf("TUESDAY");
        break;
        case 3:printf("WEdnesday");
        break;
        case 4:printf("Thursday");
        break;
        case 5:printf("Friday");
        break;
        case 6:printf("Saturday");
        break;
        case 7:printf("sunday");
        break;
            default:printf("Entered invilid day ");
    }
    //default:printf("Entered invilid day ");
    return 0;
}