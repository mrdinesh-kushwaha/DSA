#include<iostream>
#include<stack>
using namespace std;

int main(){
    
    string str="dinesh";

    stack<char> s;

    for(int i=0;i<str.length();i++)
    {
        s.push(str[i]);
    }

    // print the stack
    cout<<"Reverse String is:"<<endl;

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}