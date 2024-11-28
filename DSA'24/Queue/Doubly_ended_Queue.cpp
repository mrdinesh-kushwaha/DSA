#include<iostream>
using namespace std;
 class deque{ // Deque is data structure have perform push and pop both side front and rear
    public:
    int size;
    int* arr;
    int front;
    int rear;

    deque(int size)
    {
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    // push front:
    void pushfront(int data)
    {
        // full
        if(front==0&& rear==size-1 || front-rear==1)
        {
            cout<<"Deque if Full: "<<endl;
            return ;
        }

        //ek single:
        else if(front==-1)
        {
            front=0;
            rear=0;
            arr[front]=data;
        }
        //cicular
        else if(front==0 && rear!=size-1){
            front=size-1;
            arr[front]=data;
        }
        else{
            front--;
            arr[front]=data;
        }
    }

    //push rear

    void pushrear(int data)
    {
        if(front==0 && rear==size-1 || front-rear==1){
            cout<<"Deque is Full "<<endl;
            return;
        }
        else if(rear==-1)
        {
            front=0;
            rear=0;
            arr[rear]=data;
        }
        else if(rear==size-1 && front!=0)
        {
            rear=0;
            arr[rear]=data;
        }
        else {
            rear++;
            arr[rear]=data;
        }
    }

    //pop front:
void popfront()
{
    if(front==-1)
    {
        cout<<"deque if Empty: "<<endl;
        return;
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else if(front==size-1)
    {
        front=0;
    }
    else {
        front++;
    }
}
    //pop rear
    void poprear(){
        if(rear==-1)
        {
            cout<<"deque if Empty: "<<endl;
            return;
        }
        else if(front==rear)
        {
            front=-1,rear=-1;
        }
        else if(rear==0)
        {
            rear=size-1;
        }
        else{
            rear--;
        }
    }

 };

int main(){
    
deque dq(10);
dq.pushrear(7);
dq.pushfront(99);
dq.popfront();


    return 0;
}