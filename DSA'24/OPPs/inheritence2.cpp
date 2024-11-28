#include<iostream>
using namespace std;

//**Single Inheritance:

// class parent
// {
//     public:
//     parent(){
//         cout<<"Parent class called:"<<endl;
//     }
// };

// class child: public parent{
//     public:
//     child()
//     {
//         cout<<"Child class called:"<<endl;
//     }
// };

// int main(){
    
//     child c; // Create Object
//     return 0;
// }


// //**Multi-level Inheritance:

// class parent
// {
//     public:
//     parent(){
//         cout<<"Parent class called:"<<endl;
//     }
// };

// class child: public parent{
//     public:
//     child()
//     {
//         cout<<"Child class called:"<<endl;
//     }
// };

// class Grandchild: public child{
//     public:
//     Grandchild(){
//         cout<<"Grandchild class called:"<<endl;
//     }
// };

// int main(){
    
//     Grandchild gc; // Create Object
//     return 0;
// }

// //**Multiple Inheritance:

// class parent1
// {
//     public:
//     parent1(){
//         cout<<"Parent1 class called:"<<endl;
//     }
// };

// class parent2
// {
//     public:
//     parent2(){
//         cout<<"Parent2 class called:"<<endl;
//     }
// };

// class child: public parent1,public parent2{
//     public:
//     child()
//     {
//         cout<<"Child class called:"<<endl;
//     }
// };


// int main(){
    
//     child c; // Create Object
//     return 0;
// }

// //**Hierachical Inheritance:

// class parent
// {
//     public:
//     parent(){
//         cout<<"Parent class called:"<<endl;
//     }
// };


// class child1: public parent{
//     public:
//     child1()
//     {
//         cout<<"Child1 class called:"<<endl;
//     }
// };

// class child2: public parent{
//     public:
//     child2()
//     {
//         cout<<"Child2 class called:"<<endl;
//     }
// };

// int main(){
    
//     child2 c; // Create Object
//     return 0;
// }


/* Diomond Problem in Inheritance :*/

class parent
{
    public:
    parent(){
        cout<<"Parent class called:"<<endl;
    }
};


class child1: public parent{
    public:
    child1()
    {
        cout<<"Child1 class called:"<<endl;
    }
};

class child2: public parent{
    public:
    child2()
    {
        cout<<"Child2 class called:"<<endl;
    }
};

class grandchild: public child1,public child2{
    public:
    grandchild(){
        cout<<"grandchild Class called:"<<endl;
    }
};

int main(){
    
    grandchild gc; // Create Object
    return 0;
}

//Two times parent calling    ::::output:::::