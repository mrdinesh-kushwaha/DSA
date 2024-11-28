#include<stdio.h>
int main(){

    char ch;
   
    printf("Enter the character :\n");
    scanf("%c",&ch);
  //  print("%d",&num);
    if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
    {
        printf("ALPHA BET :");

    }
    else 
    if(ch>'0'&&ch<='9')
    {
        printf("digit :");
    }
    else{
        printf("Special symbol :");
    }
    return 0;
}