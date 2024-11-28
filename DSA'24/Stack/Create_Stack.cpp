#include<iostream>
using namespace std;

class Stack
{
    private:
    int* arr;
    int size; // for increase the size of dyanmic array run time
    int top; // for have index top of stack

    public:
    Stack(int size)
    {
        arr=new int[size];
        this->size=size;
        top=-1;
    }

    // function 

    // push: insert the ele:
    void push(int data)
    {
        // space available:
        if((size-top)>1)
        {
            top++;
            arr[top]=data;
        }
        else{
            // space not available:
            cout<<"Stack OverFlow, space Not Available"<<endl;
        }
    }

    // pop funtion:
    void pop()
    {
        // when stack is Empty:
        if(top==-1)
        {
            cout<<"Stack UnderFlow, Stack is Empty"<<endl;
        }
        else
        {
            // element hai:
            top--;
        }
    }

    //top element find function:
    int gettop()
    {
        if(top == -1)
        {
            // means ele nhi hai
            cout<<"No element at top"<<endl;
    
        }
        else{
            return arr[top];
        }
    }

    // for get size of stack(no of ele)
    int getsize()
    {
        return top+1;
    }

    // for check stack empty or not

    bool isempty()
    {
        if(top == -1)
        return true; // means empty '1'
        else
        return false; // means element hai '0'
    }
};
int main(){
    
    Stack s(5);

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout<<"Print the Stack ele:"<<endl;
    while(!s.isempty())
    {
        cout<<s.gettop()<<" ";
        s.pop();
    }

    cout<<"\nGet size of Stack: "<<s.getsize()<<endl;

    return 0;
}