#include<iostream>
using namespace std;

int main(){
    
    int years;
    cout<<"Enter the Year: "<<endl;
    cin>>years;

    if(years%4==0 && years%100!=0)
    cout<<"Leap Year "<<endl;
    else if(years%400==0)
    cout<<"Leap Year "<<endl;
    else
    cout<<"Not Leap year "<<endl;

    return 0;
}