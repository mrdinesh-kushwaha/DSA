#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void solve(vector<int>& v,int i,int sum,int& maxi)
{
    //base case
    if(i>=v.size()){
        maxi=max(maxi,sum);
        return;
    }

    //include
    solve(v,i+2,sum+v[i],maxi);

    //Exclude
    solve(v,i+1,sum,maxi);

}

int main(){
    
    vector<int>v{2,1,4,9};

    int sum=0;

    int i=0;

    int maxi=INT_MIN;
    solve(v,i,sum,maxi);

    cout<<"Maximum Sum of Non-Adjacent element in Array :-> "<<maxi;

    return 0;
}