#include<list>
#include<iostream>
using namespace std;

int main(){
    list<int>l;

    l.push_back(3);
    l.push_back(36);
    l.push_back(32);

    l.push_front(5);

    for(auto i:l)
    cout<<i<<" ";

    l.erase(l.begin());

cout<<"\n After Erase ele: \n";
      for(auto i:l)
    cout<<i<<" ";

    return 0;
}