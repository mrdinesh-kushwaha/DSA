#include<iostream>
using namespace std;

int fib(int n)
{
    // base
    if(n==1)
    return 0;
    if(n==2)
    return 1;

    return fib(n-1)+fib(n-2);
}

int main(){
    int n;
    cout<<"Enter the terms:\n";
    cin>>n;

   int ans= fib(n);

cout<<n<<" "<<"Term is ::"<<endl;
   cout<<ans;

    return 0;
}