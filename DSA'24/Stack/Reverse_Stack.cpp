#include<iostream>
#include<stack>
using namespace std;

void InsertAtBottom(stack<int>& s,int target)
{
    // base case:
    if(s.empty())
    {
        s.push(target);
        return;
    }
    int temp=s.top();
    s.pop();

    //recusion
    InsertAtBottom(s,target);
    //backtrack
    s.push(temp);
}
void reverse(stack<int>& s)
{
    // base case:
    if(s.empty())
    return ;
    //step-1 ek step tumm kro recusion kr lega
    int target=s.top();
    s.pop();
    // recursion
    reverse(s);
    // InsertAtBottom
    InsertAtBottom(s,target);

    
}
void print(stack<int> s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
}
int main(){
    stack<int>s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<"Before reverse Stack:"<<endl;
    print(s);
    reverse(s);
    cout<<"\nAfter Reverse Stack:"<<endl;
    print(s);
    return 0;
}