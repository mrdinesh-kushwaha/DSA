#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverseK(queue<int> &q ,int k){

    stack<int>s;
    int n=q.size();
    //edge case:
    if(k<=0 || k > q.size())
    {
        cout<<"Reverse not possible,emter valid K :"<<endl;
        return;
    }
    //step-1: reverse k queue to stack:
    int count=0;
    while(!q.empty()){
        int ele=q.front();
        q.pop();
        s.push(ele);
        count++;
        if(count==k)
        break;
    }
    //step-2 satck into queue:
    while(!s.empty()){
        int ele=s.top();
        s.pop();
        q.push(ele);
    }
    //step-3 : remain n-k element insert into queue:
     count=0;
    while(!q.empty() && n-k!=0){
        int ele=q.front();
        q.pop();
        q.push(ele);
        count++;
        if(count == n-k)
        break;

    }
}

int main(){
    
    queue<int>q;
    q.push(2);
    q.push(3);
    q.push(9);
    q.push(7);
    q.push(5);
    
    reverseK(q,1);

    cout<<"Reverse K element Print: "<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}