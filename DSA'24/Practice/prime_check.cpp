#include<iostream>
using namespace std;

void isprime(int n)
{
    int l=0;
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
       l=1;
    }
    if(l==1)
    cout<<"NOt prime::"<<endl;
    else
    cout<<"Prime::"<<endl;

}

int main(){
    int n;
    cin>>n;

  isprime(n);
    return 0;
}