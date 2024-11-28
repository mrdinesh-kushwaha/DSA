#include<iostream>
using namespace std;

void Occ_RTL(string s,char x,int i,int& ans){

    // base case
    if(i<0)
    return ;

    // 1case tum kro
    if(s[i]==x){
    ans=i;
    return ;
    }
    //ab recursion tum kro
    Occ_RTL(s,x,i-1,ans);
}
int main(){
    
    string s;
    cin>>s;

    char x;
    cin>>x;

    int ans=-1;
    Occ_RTL(s,x,s.size()-1,ans);
    cout<<"Occrence at index :"<<ans;

    return 0;
}