#include<iostream>
#include<vector>
using namespace std;
void merge(int* arr,int lb,int mid,int ub)
{
    int i=lb;
    int j=mid+1;

    int k=lb; //for insert in the other array:

    int l1=mid-lb+1; // length of first half:
    int l2=ub-mid+1; // length of second half:

    int l=l1+l2; // total aarray length:

    int* c = new int[l]; // Create new temp Array :

    while(i<=mid && j<=ub)
    {
        if(arr[i]<=arr[j]){
        c[k++]=arr[i++];
        }
        else
        {
            c[k++]=arr[j++];
        }
    }

    if(i>mid)
    {
        while(j<=ub)
        {
            c[k++]=arr[j++];
        }

    }
    else
    {
        while(i<=mid)
        {
            c[k++]=arr[i++];
        }
    }
    
    for(int i=lb;i<=ub;i++)
    {
        arr[i]=c[i];
    }
    
    // todo : delete c array:::
    delete[] c;


}
void divide(int* arr,int lb,int ub)
{
 
    //recursion
    if(lb<ub){

    int mid=(lb+ub)/2;

    divide(arr,lb,mid);
    divide(arr,mid+1,ub);
    merge(arr,lb,mid,ub);
    }
}
int main(){
    
    int arr[]={12,332,1,0,-3,422,21,-1213,1234,1311,313,31,331,33,311,31314,3242,13,4,13414,-131455};
    int n=sizeof(arr)/sizeof(int);

    int lb=0;
    int ub=n-1;

    divide(arr,lb,ub);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    return 0;
}