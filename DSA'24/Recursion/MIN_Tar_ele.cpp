#include<iostream>
#include<limits.h>

using namespace std;

int solve(int arr[],int n,int target)
{
    // base case:
    if(target==0)
    return 0;
    if(target<0)
    return INT_MAX;

    //1 case tum solve kro baki 
    // recursion sambhal legaa

    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        int ans=solve(arr,n,target-arr[i]);
        if(ans!=INT_MAX)
        mini=min(mini,ans+1);
    }
    return mini;
}

int main(){
    
    int arr[]={1,2,3,4,5};

    int n=5;
  
    int target=5;

    int ans=solve(arr,n,target);
    cout<<"answer:"<<ans;


    return 0;
}