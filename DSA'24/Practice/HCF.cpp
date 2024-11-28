#include<iostream>
using namespace std;

int Findgcd(int x,int y)
{
   

    while(x!=y)
    {
        if(x>y)
        x-=y;
        else
        y-=x;
    }
 return x ; // you can return x or y both are same at that time:::
}

int main(){
    int a;
    cout<<"Enter First Number:"<<endl;
    cin>>a;

    int b;
    cout<<"Enter Second Number:"<<endl;
    cin>>b;

    int gcd=Findgcd(a,b);

    cout<<"GCD/HCF of "<<a<<" and "<<b<<" Is: "<<gcd<<endl;

    return 0;
}