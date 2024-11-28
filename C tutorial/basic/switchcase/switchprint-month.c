#include<stdio.h>
int main(){
    
int month;
    printf("Enter the month :");
    scanf("%d",&month);
    switch(month)
    {
        case 1:printf("January and days :31");
        break ;
        case 2:printf("February and days :28/29");
        break ;
       case 3: printf("March and days :31 ");
        break ;
        case 4:printf("April and days :30 ");
        break ;
        case 5:printf("May and days :31 ");
        break ;
        case 6:printf("June and days :30");
        break ;
        case 7:printf("July and days :31 ");
        break ;
        case 8:printf("August and days : 31");
        break ;
        case 9:printf("September and days :30 ");
        break ;
        case 10:printf("October and days :31 ");
        break ;
        case 11:printf("November and days : 30 ");
        break ;
        case 12:printf("Decmber and days :31 ");
        default:printf("Entered invilid month "); 
    }
    return 0;
}