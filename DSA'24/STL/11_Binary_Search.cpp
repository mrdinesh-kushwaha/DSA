#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

int main(){
    
    // Aarry Should be Sorted ::

    vector<int>arr{1,3,5,5,5,6,8};

    bool l=binary_search(arr.begin(),arr.end(),6);
    if(l==1)
    cout<<"Target FOund:"<<endl;
    else
    cout<<"not Found:"<<endl;

    int upper=upper_bound(arr.begin(),arr.end(),5)-arr.begin();// some Error***

    cout<<"Last Iteration index:"<<upper<<endl;

     int lower=lower_bound(arr.begin(),arr.end(),5)-arr.begin();

    cout<<"1st Iteration index:"<<lower<<endl;
    return 0;
}