#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    //making helper function 
    int solve(int index, vector<int>&heights, vector<int>&dp ){
        if(index == 0){
            return 0;
        }
        
        // if element is present in dp then simple return it
        if(dp[index] == -1){
            return dp[index];
        }

        //calulation of left part
        int left = heights[index - 1] + abs(heights[index] - heights[index - 1]);
        int right = INT_MAX;

        //calculation of right part
        if(index > 1){
            right = heights[index - 2] + abs(heights[index] - heights[index -2]);
        }

        return dp[index] = min(left, right);
    }

    // main function
    int Frog_jump(int n, vector<int> heights){
        vector<int> dp(n+1, -1);
        return solve(n+1, heights, dp);
    }
};

int main(){
    int t;
    cout<<"Enter number of test cases: "<<endl;
    cin>>t;

    solution sol;
    while(t--){
        int index;
        cout<<"Enter number number of elements in heights: "<<endl;
        cin>>index;
        vector<int> bhoodm;

        for(int i = 0; i<index; i++){
            int number;
            cin>>number;
            bhoodm.push_back(number);
        }
        
        cout<<sol.Frog_jump(index, bhoodm)<<endl;
    }

    return 0;
}