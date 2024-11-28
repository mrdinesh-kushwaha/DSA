#include<iostream>
#include<vector>
using namespace std;
void print_sub(vector<int>&nums,int start,int end)
{
    //base case
    if(end==nums.size())
    return ;
    // 1 case tum kro
    cout<<"{";
    for(int i=start;i<=end;i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<"}";
    cout<<endl;
    print_sub(nums,start,end+1);
}

void print_subarray(vector<int>& nums)
{
    for(int start=0;start<nums.size();start++)
    {
        int end=start;
        print_sub(nums,start,end);
    }
}

int main(){
    
    vector<int>nums{1,2,3,4,5};
    cout<<"Subarray is::"<<endl;
    print_subarray(nums);

    return 0;
}