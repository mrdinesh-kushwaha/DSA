#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int s,int mid,int e){
    vector<int>temp;
    int left=s;
    int right=mid+1;

    while(left<=mid && right<=e){
        if(arr[left]<arr[right]){
          temp.push_back(arr[left++]);
        }
        else{
           temp.push_back(arr[right++]);
        }
    }
    while(left<=mid){
        temp.push_back(arr[left++]);
    }
    while(right<=e){
       temp.push_back(arr[right++]);
    }

    for(int i=s;i<=e;i++)
    {
        arr[i]=temp[i-s]; /// imptant Don't forget::::::::
    }
}
void mergesort(int arr[],int s,int e){

    if(s>=e) return ;
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,mid,e);
}
int main(){
    
    int arr[]={5,5,23,23,12,424,3,32,21,232,3};
    int n=sizeof(arr)/sizeof(int);
    mergesort(arr,0,n-1);
    cout<<"Sorted Array: "<<endl;
      for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}