#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //**MAX HEAP//**

    // priority_queue<int>pq; // by  default this is like max heap behave...

    // pq.push(5);
    // pq.push(8);
    // pq.push(2);
    // pq.push(81);
    // pq.push(1);

    // cout<<"Top element of queue : "<<pq.top()<<endl;

    // cout<<"Printing queue elment "<<endl;
    // while(!pq.empty()){
    //     cout<<pq.top()<<" ";
    //     pq.pop();
    // }
    // cout<<"\nTop element of queue : "<<pq.top()<<endl;
    // cout<<"\nSize of queue : "<<pq.size()<<endl;

    // if(pq.empty()){
    //     cout<<"Queue is empty "<<endl;
    // }
    // else
    // cout<<"Queue is Not empty ";


    //***MIN HEAP//**
    
    priority_queue<int,vector<int>,greater<int> >pq; // this like MIN HEAP::

    pq.push(78);
    pq.push(2);
    pq.push(5);
    pq.push(321);
    pq.push(1);

    cout<<"Top Element is :"<<pq.top()<<endl;

    cout<<"Size of queue :"<<pq.size()<<endl;

    cout<<"Printing Queue element :"<<endl;
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<"\nTop Element is :"<<pq.top()<<endl;
}