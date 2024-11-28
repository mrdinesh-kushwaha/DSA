#include<iostream>
using namespace std;
void  print_digit(int n)
{
    // base condition:
    if(n==0)
    return ;
    // bakki recursion krega :
    //int p=n/10;
    print_digit(n/10);

// 1st case mai solve kr rha hu :
     int digit=n%10;
    cout<<digit<<" ";

}
int main(){
    
    int n=9876;

    print_digit(n);

    return 0;
}