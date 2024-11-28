#include<iostream>
#include<vector>
using namespace std;
// void solve(int arr[],int idx,int n,vector<int>temp){
//     // base case:
//     if(idx>=n){
//         for(int i=0;i<temp.size();i++){
//             cout<<temp[i]<<" ";
//         }
//         if(temp.size()==0) cout<<"{}";
//         cout<<endl;
//         return ;
//     }
//     temp.push_back(arr[idx]);
//     solve(arr,idx+1,n,temp);// take in subsequance
//     temp.pop_back();  // remove which are add // convert into original form which are added:::
//     solve(arr,idx+1,n,temp); // not take in Subsequance:::
// }

void solve(int arr[],int idx,int n,vector<int>&temp,vector<vector<int>>&ans){
    // base case:
    if(idx>=n){
       ans.push_back(temp);
        return ;
    }
    temp.push_back(arr[idx]);
    solve(arr,idx+1,n,temp,ans);// take in subsequance
    temp.pop_back();  // remove which are add // convert into original form which are added:::
    solve(arr,idx+1,n,temp,ans); // not take in Subsequance:::
}
int main(){
    
    int arr[3]={3,2,1};
    int n=3;
    vector<int>temp;
    vector<vector<int>>ans;
    solve(arr,0,3,temp,ans);
    cout<<"Total Subsequances are :"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<"{";
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
            if(j!=ans[i].size()-1)
            cout<<",";
        }
        cout<<"}";
        cout<<endl;
    }

    return 0;
}