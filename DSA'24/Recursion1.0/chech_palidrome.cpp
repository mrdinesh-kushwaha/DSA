#include<iostream>
using namespace std;
// bool ispalidrome(string& s,int l,int r){

//         if(l>=r) return true;
//         if(s[l]!=s[r]) return false;
//         return ispalidrome(s,l+1,r-1);
// }
bool ispalidrome(string& s,int i,int n){ // using one variable

        if(i>=n/2) return true;
        if(s[i]!=s[n-i-1]) return false;
        return ispalidrome(s,i+1,n);
}
int main(){
    
    string s="mhj";
    int n=s.length();
    if(ispalidrome(s,0,n)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}