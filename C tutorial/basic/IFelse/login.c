#include<stdio.h>
int main(){
   char ch;
   printf("Enter a alphbet :");
   scanf("%c",&ch);
   if(ch>='A'&&ch<='Z')
   {
    printf("UPEER case : %c",ch);
   }
   else if(ch>='a'&&ch<='z')
   {
    printf("LOWER case : %c",ch);
   }
   else{
    printf(" YOU entered Invilid alphabet ");
   }
    return 0;
}