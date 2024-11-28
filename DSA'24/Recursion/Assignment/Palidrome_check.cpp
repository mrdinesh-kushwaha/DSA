#include<iostream>
using namespace std;
// void palidrome(int n,int& ans)
// {
//     //base case
//     if(n==0)
//     return ;

//     // 1 case tum kro
//     int digit=n%10;
//     ans=ans*10+digit;
//     n=n/10;
//     // recursion mai to chala ab tum sambhalo
//     palidrome(n,ans);
// }
// int main(){
    
//     int n=81;

//     int ans=0;
//     palidrome(n,ans);
//     if(n!=ans)
//     cout<<"not Palidrome:"<<endl;
//     else
//     cout<<" Palidrome:"<<endl;

//     return 0;
// }

bool ispalidrome(string &str,int start,int end)
{
    // base
    if(start>=end)
    {
        return true;

    }

    //1 case
    if(str[start]!=str[end])
    return false;

    // baki recursion tum kro

    return ispalidrome(str,start+1,end-1);
}

int main()
{
    string str="carrac";

    if(ispalidrome(str,0,str.size()-1))
    cout<<"Palidrome"<<endl;
    else
    cout<<"Not palidrome:"<<endl;
}