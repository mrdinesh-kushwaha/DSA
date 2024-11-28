#include<iostream>
using namespace std;

void fabnocci(int n, int a=0,int b=1)
{
    if(n<=0)
    return ;
    cout<<a<<" ";

    fabnocci(n-1, b, a+b);
}

int main(){
    
int n;
cin>>n;
fabnocci(n);

    return 0;
}