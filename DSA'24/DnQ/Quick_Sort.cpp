#include<iostream>
using namespace std;

int partition(int* arr,int lb,int ub)
{
  
    int pivot= arr[lb];
    int start= lb;
    int end= ub;
    
    while(start<end)
    {
        while(arr[start]<=pivot){
        start++;
        }

        while(arr[end]>pivot)
        {
            end--;
        }
        if(start<end){
        swap(arr[start],arr[end]);
        }
    }
    swap(arr[end],arr[lb]);

    return end;
}
void quick_sort(int* arr,int lb,int ub)
{
    if(lb<ub)
    {
        int loc=partition(arr,lb,ub);
         quick_sort(arr,lb,loc-1);
         quick_sort(arr,loc+1,ub);
      
    }

}

int main(){
    
    int arr[]={2,2,1,0,65,33,23,21,3234};
    int n=sizeof(arr)/sizeof(int);
    quick_sort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}