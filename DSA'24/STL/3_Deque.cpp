#include<deque>
#include<iostream>
using namespace std;

int main(){
    
    deque<int>d;   // In deque insert Deletion Both side 1st and last side:***

    d.push_back(1);
     d.push_back(3);
      d.push_back(5);
       d.push_back(6);
        d.push_back(7);

        d.push_front(0); //***Insert Element From 1st pos:

        d.push_back(10); //***Insert from last Pos:

        cout<<"YOu entered Element:"<<endl;

        for(auto i:d)
        cout<<i<<" ";

        cout<<endl;

        // d.erase(d.end(),d.end()+2); // last se do element ko delete kr do***

        // cout<<"After Erase d-que:\n";

        
        // for(auto i:d)
        // cout<<i<<" ";

    return 0;
}