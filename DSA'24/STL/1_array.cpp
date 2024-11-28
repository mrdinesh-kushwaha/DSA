#include<iostream>
#include<array>
using namespace std;

int main(){
    
    array<int,5> arr{4,2,1,4,6};

    int n=arr.size();

    for(auto i:arr)
    cout<<i<<" ";

    cout<<"\n";

    //cout<<"Check array empty:or Not "<<arr.empty()<<endl; //  1->Empty

      cout<<"Check First Element :"<<arr.front()<<endl;
        cout<<"Check Last Element:"<<arr.back()<<endl;


    return 0;
}