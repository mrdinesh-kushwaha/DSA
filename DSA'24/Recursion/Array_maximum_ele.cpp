#include<iostream>
#include<limits.h>
using namespace std;

void maximum(int arr[],int n,int i,int& maxi)
{
        //base condition --kaha rukna hai

        if(i>=n)
        {
            return ;
        }

        if(arr[i]>maxi)
        maxi=arr[i];
       
        maximum(arr,n,i+1,maxi);

       
}

int main(){
    
    int arr[]={12,3,4,6,45,3,232,4};
    int n=sizeof(arr)/sizeof(int);

    int i=0;

    int maxi=INT_MIN;

    maximum(arr,n,i,maxi);

    cout<<"Maximum Element:"<<maxi;



    return 0;
}