/*Run time Polymorphism */
#include<iostream>
using namespace std;

class parent
{
    public:
    virtual void print(){ //decide at runtime 
                           //which fn call use virtual
        cout<<"Parent class:"<<endl;

    }
    void show(){
        cout<<"parent class:"<<endl;
    }

};

class child: public parent{
    public:
    void print(){
        cout<<"child class:"<<endl;
    }
    void show(){
        cout<<"child class:"<<endl;
    }
};


int main(){
    parent *p;
    child c;

    p=&c;
    p->print();
    p->show();

    return 0;
}