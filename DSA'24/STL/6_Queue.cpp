#include<queue>
#include<iostream>
using namespace std;

int main(){
    
    queue<int> q;

    q.push(2);
      q.push(4);
        q.push(6);
          q.push(7);


          cout<<"First Element:"<<q.front()<<endl;
        cout<<"Last Element:"<<q.back()<<endl;
          



    return 0;
}