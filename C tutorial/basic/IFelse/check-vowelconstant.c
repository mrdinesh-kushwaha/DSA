#include<stdio.h>
int main()
{
char ch;
printf("Enter the any alphabet :\n");
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{
    printf("VOwel ");

}
else{
    printf(" Consant ");
}
return 0;
}