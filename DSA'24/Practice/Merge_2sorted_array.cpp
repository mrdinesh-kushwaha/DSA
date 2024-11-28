#include<iostream>
using namespace std;

int main(){
    int n1=3;
    int n2=4;
    
    int arr1[3]={67,89,110};
    int arr2[4]={7,8,9,10};

    int i=0,j=0,k=0;

    int c[7];

    // merging logic 
    while(i<n1 && j<n2)
    {
        if(arr1[i]<=arr2[j])
        {
            c[k]=arr1[i];
            k++,i++;
        }
        else
        {
            c[k]=arr2[j];
            k++,j++;
        }
    } 

    // 1 khatm ho gya tab

    if(i>=n1)
    {
        while(j<n2)
        {
           c[k]=arr2[j];
           k++,j++; 
        }
    }

    else{
        while(i<n1)
        {
            c[k]=arr1[i];
            k++,i++;
        }
    }

    cout<<"result is:"<<endl;
    for(int i=0;i<7;i++)
    {
        cout<<c[i]<<" ";
    }

    return 0;
}
