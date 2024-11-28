#include<queue>
#include<iostream>
using namespace std;

int main(){
    
    priority_queue<int> maxi; // Output Decesding order:

    maxi.push(1);
    maxi.push(5);
    maxi.push(6);
    maxi.push(7);
    maxi.push(8);

int n=maxi.size();
    for(int i=0;i<n;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }

// Min Heap: //*** Aceseding Order:

priority_queue<int, vector<int>,greater<int> >mini;

mini.push(4);
mini.push(6);
mini.push(8);
mini.push(9);
mini.push(40);

cout<<"\n Minimum Heap:\n";

int m=mini.size();

for(int i=0;i<m;i++){
cout<<mini.top()<<" ";
mini.pop();
}


    return 0;
}