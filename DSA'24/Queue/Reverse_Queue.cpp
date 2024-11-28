#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverseQueue(queue<int> &q) // M-1 using STACK:
{
    stack<int>s;

    while(!q.empty()){   // step-1: queue into stack
        int element=q.front();
        q.pop();

        s.push(element);
    }

    //step-2: stack into queue
    while(!s.empty()){
        int element=s.top();
        s.pop();
        q.push(element);
    }

}

void reverse_queue(queue<int> &q)   //M-2 USING RECURSION:
{
    // base case:
    if(q.empty())
    return;
    // step-1: ek case tum kro baki recursion sambhal lega:
    int temp=q.front();
    q.pop();

    //ste-2 recusion call:
    reverse_queue(q);

    // step-3 backtrack
    q.push(temp);

}

int main(){
    queue<int> q;
    q.push(1);
    q.push(5);
    q.push(2);
    q.push(9);
    q.push(7);
    q.push(6);

  // reverseQueue(q);

    // cout<<"Reverse Queue is : "<<endl;
    // while(!q.empty()){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }
    // cout<<endl;
    
    reverse_queue(q);

    cout<<"Reverse Queue By Recursion : "<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}