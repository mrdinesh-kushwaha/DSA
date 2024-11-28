#include<iostream>
#include<stack>
using namespace std;
void InsertAtpos(stack<int>&s,int target)
{
    if(s.empty())
    {
        s.push(target);
        return;
    }
    if(s.top()>=target)
    {
        s.push(target);
        return ;
    }

    // get top element:
    int topElement=s.top();
    s.pop();

    // call recusion:
    InsertAtpos(s,target);
    // backtrack:
    s.push(topElement);
}
void sortStack(stack<int>& s)
{

//base case
if(s.empty())
return;

int target=s.top();
s.pop();

// call recursion:
sortStack(s);

// insert target at right pos:
InsertAtpos(s,target);      // ye sb ele ko right pos pr pahuchata hai:

}

void print(stack<int> s)?
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}

int main(){

    stack<int>s;
    
    s.push(3);
    s.push(99);
    s.push(0);
    s.push(7);
    s.push(11);

    sortStack(s);
    cout<<"Printing..."<<endl;
    print(s);

    return 0;
}