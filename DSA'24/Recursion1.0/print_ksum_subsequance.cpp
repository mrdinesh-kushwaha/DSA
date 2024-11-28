#include<iostream>
#include<vector>
using namespace std;
void solve(int arr[],vector<int>& temp,int sum,int idx,int k,int n){
    if(idx>=n){
        if(sum==k)
        {
            for(auto i: temp)
            cout<<i<<" ";
        }
        cout<<endl;
        return ;
    }

    temp.push_back(arr[idx]);
    sum+=arr[idx];
    solve(arr,temp,sum,idx+1, k, n); // picked

    temp.pop_back(); // remove 
    sum-=arr[idx];

    solve(arr,temp,sum,idx+1,k,n); /// not picked
}
int main(){
int arr[]={1,2,1};
int k=2;
int sum=0;
int n=sizeof(arr)/sizeof(int);
vector<int>temp;
solve(arr,temp,sum,0,k,n);

    return 0;
}