#include<iostream>
#include<queue>
using namespace std;

void interleave_queue(queue<int>& q){
    queue<int>q2;
    int size=q.size();
    int k= size/2;
    int cnt=0;

    //step-A: seprate first half from queue:
    while(!q.empty()){
        int ele=q.front();
        q.pop();

        q2.push(ele);
        cnt++;

        if(cnt==k)
        break;
    }
    //step-B push 1st half and 2nd half ele into queue respectively:
    while(!q.empty() && !q2.empty()){
        int first=q2.front();
        q2.pop();
        q.push(first);

        int second =q.front();
        q.pop();
        q.push(second);
    }
    //step-C if q is odd then one ele remain:
    if(size&1){
        int ele=q.front();
        q.pop();
        q.push(ele);
    }
}

int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);
    interleave_queue(q);

    cout<<"InterLeave queue : "<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}