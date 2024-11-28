#include<iostream>
using namespace std;
void reverse(string & str,int start,int end)
{
    // base case
    if(start>=end)
    return;

    // 1case tum kro
    swap(str[start],str[end]);

    // recursion tum kro
    reverse(str,start+1,end-1);

}
int main(){
    string str;
    cin>>str;

    int start=0,end=str.size()-1;

    reverse(str,start,end);

    cout<<str;

    return 0;
}