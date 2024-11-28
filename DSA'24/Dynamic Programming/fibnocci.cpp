// #include<iostream>
// #include<cstring>
// using namespace std;     // OLD METHED
// int dp[1000];
// int fib(int n){
//     if(n<=1) return n;
//     if(dp[n]!=-1) return dp[n];
//     return dp[n]=fib(n-1)+fib(n-2);
// }
// int main(){
//     int n;
//     cin>>n;
//     memset(dp,-1,sizeof(dp));
//     cout<<fib(n);

//     return 0;
// }

// *************NEW METHOD??????

#include<iostream>
#include<vector>
using namespace std;
int fib(int n,vector<int>&dp){
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];

    return dp[n]=fib(n-1,dp)+fib(n-2,dp);
}
int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);
    cout<<fib(n,dp);

    return 0;
}