#include<iostream>
using namespace std;
int partion(int arr[],int low ,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high){ // jab tak less ho pivot se
            i++;
        }
        while(arr[j]> pivot && j>=low){ // jab tak greater ho pivot se
            j--;
        }
        if(i<j) {swap(arr[i],arr[j]);} // jaha dono ruk jaye
    }
    swap(arr[low],arr[j]); // where i>j // pivot is copy value so not use ::::

    return j;
}
void quickSort(int arr[],int low,int high){
    if(low<high){
        int partion_index=partion(arr,low,high);
        quickSort(arr,low,partion_index-1);
        quickSort(arr,partion_index+1,high);
    }
}
int main(){
    
    int arr[]={0,2,5,9,3,5};
    int n=sizeof(arr)/sizeof(int);

    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

    return 0;
}