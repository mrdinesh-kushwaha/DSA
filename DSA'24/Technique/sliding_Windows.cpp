#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int sliding_Windows(vector<int>& arr,int k){ // T.C = O(N) min consecutive sum of the Array::: 
    int ans=INT_MAX;
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    ans=min(ans,sum);
    for(int i=1;i<=arr.size()-k;i++){     
        sum-=arr[i];
        sum+=arr[i+k-1];
        ans=min(ans,sum);
    }
    return ans;
}
int main(){
    
    vector<int>arr{0,1,3,12,2,0,0};
    int k=3;
    int ans =sliding_Windows(arr,k);
    cout<<"Ans is: "<<ans;

    return 0;
}