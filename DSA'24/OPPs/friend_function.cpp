#include<iostream>
using namespace std;

class A{
    int x;

    public:
    A(int y){
        x=y;

    }

    friend void print(A &obj);


};

void print(A &obj){
    cout<<"Output:"<<obj.x<<endl;
}

int main(){
    
A obj(9);

//cout<<obj;// can't be print using

print(obj);

    return 0;
}