#include<iostream>
using namespace std;
class Queue{
    public:
    int front;
    int rear;
    int* arr;
    int size;

    Queue(int size)
    {
        this->size=size;
        arr=new int[size];
        front=0;
        rear=0;
    }

    void push(int data)
    {
        if(rear==size)// means queue is Full
        {
            cout<<"Queue is Full:"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }
    void pop()
    {
        if(front==rear) // means queue is Empty:
        {
            cout<<"Queue is Empty:"<<endl;
        }
        else{
            arr[front]=-1; // marking
            front++;
            if(front==rear)
            {
                front=0;
                rear=0;
            }
        }
    }
    bool isempty()
    {
        if(front==rear)
        return true;
        else
        return false;
    }
    int getfront()
    {
        return arr[front];
    }
    int getsize()
    {
        if(front==rear)
        return 0;
        else{
        return (rear-front);
        }
    }
};

int main(){
    
Queue q(10);
q.push(1);
q.push(7);
q.push(0);
q.push(65);

cout<<"Size of queue: "<<q.getsize()<<endl;
q.pop();
cout<<"Size of queue: "<<q.getsize()<<endl;
cout<<"\nPrinting Element: "<<endl;
while(!q.isempty())
{
    cout<<q.getfront()<<" ";
    q.pop();
}

cout<<"\nSize of queue: "<<q.getsize()<<endl;
cout<<"\nqueue is Empty or Not : "<<q.isempty()<<endl; // empty means '1'

    return 0;
}