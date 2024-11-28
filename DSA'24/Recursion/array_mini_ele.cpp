#include<iostream>
#include<limits.h>
using namespace std;
void minimum(int arr[],int n,int i,int& mini)
{
    if(i>=n)
    return;

    if(arr[i]<mini)
    mini=arr[i];

    minimum(arr,n,i+1,mini);
}
int main(){
    
    int arr[]={2,3,4,5,6,78,-6,5,5};

    int n=sizeof(arr)/sizeof(int);

    int i=0;
    int mini=INT_MAX;

    minimum(arr,n,i,mini);

    cout<<"Minimum Element:"<<mini;

    return 0;
}