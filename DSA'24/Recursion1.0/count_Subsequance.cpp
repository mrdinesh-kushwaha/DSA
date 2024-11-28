#include<iostream>
using namespace std;
int solve(int arr[],int n,int idx){
    if(idx==n) return 1;

    int l=solve(arr,n,idx+1);
    int r=solve(arr,n,idx+1);
    
    return l+r;
}
int main(){
    
    int arr[]={2,4,9,1};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Total no of Subsequances :"<<solve(arr,n,0);

    return 0;
}