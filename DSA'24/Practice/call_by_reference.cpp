#include<iostream>
#include<vector>
using namespace std;

void insert(vector<int> &arr)
{
     //arr[4]=5;
    arr.push_back(5);
}

int main(){
    // int arr[5]={1,2,3,4};

    vector<int>arr{1,2,3,4};

    for(auto i:arr)
    cout<<i<<" ";

    insert(arr);

    cout<<endl;
    for(auto i:arr)
    cout<<i<<" ";

    return 0;
}