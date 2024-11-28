#include<iostream>
using namespace std;

void print(string str ,int n,int i)
{
    if(i>=n)
    return ;

    cout<<str[i];

    print(str,n,i+1);
}

int main(){
    
    string str="dinesh";

    int n=str.length();

    cout<<"size:"<<n<<endl;

    int i=0;

    print(str,n,i);

    return 0;
}