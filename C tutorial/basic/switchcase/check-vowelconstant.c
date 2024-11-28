#include<stdio.h>
int main(){
    char ch;
    printf("Enter the alphabet :");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'o':
        case 'i':
        case 'u':
        printf("Vowel");
        break ;
        default :printf("consuenent");
    }
    return 0;
}