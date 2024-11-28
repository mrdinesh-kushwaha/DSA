#include<stack>
#include<iostream>
using namespace std;

int main(){
    
    stack<string> s;

    s.push("Love");
    s.push("You");
    s.push("Dinesh");

   cout<<" Stack Top Element::"<<s.top()<<endl;
   cout<<" Stack size Element::"<<s.empty()<<endl;
    return 0;
}