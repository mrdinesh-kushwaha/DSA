#include<iostream>
using namespace std;
void reverse(int arr[],int n,int l,int r){
    if(l>=r) return;
    swap(arr[l],arr[r]);
    reverse(arr,n,l+1,r-1);
}
int main(){
    
    int arr[5]={1,2,3,4,5};
    reverse(arr,5,0,4);

    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";

    return 0;
}