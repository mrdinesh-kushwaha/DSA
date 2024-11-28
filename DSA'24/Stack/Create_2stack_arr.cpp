#include<iostream>
using namespace std;

class Stack{

    public:
    int* arr;
    int size;
    int top1;
    int top2;

    Stack(int size)
    {
        
        arr=new int[size];
        this->size=size;
        top1=-1;
        top2=size;
    }

    // Functins

    // push1

    void push1(int data)
    {
        if(top2-top1==1)
        {
            // means space nhi ha
               cout<<"Stack 1 is OVERFLOW:"<<endl;
        
        }

        else{
            //  space hai
              top1++;
            arr[top1]=data;
        }
    }
    
    //pop1
    void pop1()
    {
        if(top1==-1)
        {
            cout<<"Stack is 1 IN UNDERFLOW:"<<endl;
        }
        else
        {
            arr[top1]=0; // only for understanding:
            top1--;
        }
    }
    //push2
    void push2(int data)
    {
        if(top2-top1==1)
        {
            // space available NHI hai
              cout<<"Stack 2 is In OVERFLOW:"<<endl;
        
        }
        else{
             top2--;
            arr[top2]=data;
          
        }
    }
    //pop2
    void pop2()
    {
        if(top2==size)
        {
            // means stack is empty:
            cout<<"Stack 2 is In UNDERFLOW:"<<endl;
        }
        else{
            arr[top2]=0;
            top2++;
        }
    }

    // ye sirf understanding ke liye hai ese use nhi krna hai...ok
    void print()
    {
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
         cout<<endl;
    }
   
};

int main(){
    
    Stack s(10);

    s.push1(5);
    s.print();

      s.push1(6);
    s.print();

      s.push1(7);
    s.print();

      s.push1(8);
    s.print();

      s.push1(9);
    s.print();

      s.push1(10);
    s.print();

      s.push2(90);
    s.print();

      s.push2(85);
    s.print();

      s.push2(80);
    s.print();

    s.pop1();
    s.print();

    s.pop2();
    s.print();

       s.pop1();
    s.print();

    s.pop2();
    s.print();

   

    return 0;
}