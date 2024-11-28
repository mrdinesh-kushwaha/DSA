#include<iostream>
using namespace std;
// void sum(int n,int& add){
//     if(n<1){
//         return ;
//     }
//     add+=n;
//     sum(n-1,add);
// }
int add(int n,int sum){
    if(n<1){
        return sum;
    }
    return add(n-1,sum+n); 
}
int main(){
    int n;
    cin>>n;
    add(n,0);
    cout<<add(n,0);
    return 0;
}