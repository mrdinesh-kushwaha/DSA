#include<stdio.h>
int main(){
    float amt,debitamt,creditamt;
    char ch;
    printf("Enter initial amount\n Account Balance : \n");
    scanf("%f",&amt);
    printf("Enter \nc for Credit balance : \nd for debit Balance : \nb for check balance :\n");
    scanf("\n%c",&ch);
    switch(ch)
    {
        case 'c':
        printf("Enter Credit amount :\n");
        scanf("%f",&creditamt);
        amt=amt+creditamt;
        printf("Credit balance Successfully \n Net balance : %.3f",amt);
        break;
        case 'd':
        printf("Enter Debit amount :\n");
        scanf("%f",&debitamt);
        if(amt>=debitamt)
        {
            amt=amt-debitamt;
            printf("Debit balance Successfully \n Net balance : %.3f",amt);
        }
        else
        {
            printf("Sorry Your Account balance insufficient\n Net account balance :%.3f ",amt);
        }
        break;
        case 'b':
        printf("Net Account balance : %.3f",amt);
        break;
        default :
        printf("Entered Invilid input!");
    }
    return 0;
}