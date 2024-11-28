#include<iostream>
using namespace std;

// void print(int arr[],int n,int i)
// {
    //base condition
//     if(i>=n)
//     {
//         return;
//     }

//     cout<<arr[i]<<" ";

//     print(arr,n,i+1);
// }

// int main(){
    
//     int arr[]={1,2,3,4,5};

//     int n=sizeof(arr)/sizeof(int);

//     int i=0;

//     print(arr,n,i);

//     return 0;


//M-2


void print(int arr[],int n)
{
    if(n==0)
    {
        return;
    }

    cout<<arr[0]<<" ";
    print(arr+1,n-1);
}
int main()
{
    
    int arr[]={1,2,3,4,5};

    int n=sizeof(arr)/sizeof(int);


    print(arr,n);

    return 0;
}