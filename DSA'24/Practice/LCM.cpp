#include<iostream>
using namespace std;

int FindLCM(int x,int y)
{
   int a1=x,b1=y;

    while(x!=y)
    {
        if(x>y)
        x-=y;
        else
        y-=x;
    }
 return (a1*b1)/x ; // you can return x or y both are same at that time:::
}

int main(){
    int a;
    cout<<"Enter First Number:"<<endl;
    cin>>a;

    int b;
    cout<<"Enter Second Number:"<<endl;
    cin>>b;

    int lcm=FindLCM(a,b);

    cout<<"LCM of "<<a<<" and "<<b<<" Is: "<<lcm<<endl;

    return 0;
}