#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;

    q.push(2);
    q.push(6);
    q.push(67);
    q.push(9);
    q.push(99);

    cout<<"Size of Queue: "<<q.size()<<endl;
    cout<<"Front/First element of Queue: "<<q.front()<<endl;
    cout<<"Rear/last element of Queue: "<<q.back()<<endl;
     q.pop();
     cout<<"\nAfter Deletion of First Element: \n";
     cout<<endl;

    cout<<"Size of Queue: "<<q.size()<<endl;
    cout<<"Front/First element of Queue: "<<q.front()<<endl;
    cout<<"Rear/last element of Queue: "<<q.back()<<endl;

    cout<<"\nprinting of Queue: \n";

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}