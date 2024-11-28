#include<iostream>
using namespace std;

// ******called Overloading  
// class sum
// {
//     public:
//     void add(int x,int y)
//     {
//         int sum=x+y;
//         cout<<"Sum:"<<sum<<endl;
//     }
//     void add(int x,int y,int z)
//     {
//         int sum=x+y+z;
//         cout<<"Sum is:"<<sum<<endl;

//     }

//     void add(float x,float y)
// {
//     float sum=x+y;
//     cout<<"Sum is:"<<sum<<endl;
// }

// };

// int main(){
    
//     sum b;
//     b.add(3,5);
//     b.add(1,3,5);
//     b.add(float(5.6),float(3.4));

//     return 0;
// }


/* Operator OverLoading*/

class B
{
    public:
   int a;
   int b;

   public:
   int add()
   {
    return a+b;
   }

   void operator+ (B &obj )
   {
    int value1= this->a;
    int value2= obj.a;
    cout<<"Output:"<<value2-value1<<endl;
   }
};

int main(){
    
B obj1,obj2;

obj1.a=5;
obj2.a=7;
obj1+obj2;

    return 0;
}
