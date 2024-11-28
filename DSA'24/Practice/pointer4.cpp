#include<iostream>
using namespace std;

int main(){
    
    int* arr[3];

    int nums[3]={1,2,4};

    int* ptr=nums;
    
    arr[0]= &nums[0];

    arr[2]= &nums[2];

    cout<<*arr[2];

    cout<<"\n"<<*(ptr+1);

    return 0;
}