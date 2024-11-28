#include<iostream>
using namespace std;

void print_1_n(int n)
{
    if(n==0)
    return ;

    print_1_n(n-1);
    cout<<n<<" ";
}

int main(){
    
   int n;
   cout<<"Enter A number::"<<endl;
   cin>>n;

   print_1_n(n);

    return 0;
}