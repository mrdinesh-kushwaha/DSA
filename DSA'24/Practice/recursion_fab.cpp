#include<algorithm>
#include<iostream>
using namespace std;

int fabnoccci(int n)
{
    if(n==1)
    return 0;
    if(n==2)
    return 1;



    return (fabnoccci(n-1)+fabnoccci(n-2));

}

int main(){
    
    int n;
    cout<<"Enter the number::\n";

    cin>>n;

   int s=fabnoccci(n);

cout<<"Fabnocci element  at pos:"<<n<<"->"<<s;
    return 0;
}