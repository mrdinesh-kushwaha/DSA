#include<iostream>
#include<limits.h>
using namespace std;

int solve(int n,int x,int y,int z)
{
    //base condition
    if(n==0)
    return 0;

    if(n<0)
    return INT_MIN;
    // 1 case hum solve kr rhe hai 
    //baki tum sambhal lena recursion...**ok**
    int ans1=solve(n-x,x,y,z)+1;
    int ans2=solve(n-y,x,y,z)+1;
    int ans3=solve(n-z,x,y,z)+1;
    int result=INT_MIN;
    result=max(ans1,max(ans2,ans3));

    return result;
}

int main(){
    
    int n=8;
    int x=5,y=3,z=3;

    int ans=solve(n,x,y,z);
    if(ans<0) // ans negative it's means invalid answer//
    ans=0;

    cout<<"Max segment is:"<<ans;

    return 0;
}