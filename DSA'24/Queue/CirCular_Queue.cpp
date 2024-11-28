#include<iostream>
using namespace std;
class CirQueue{
    public:
    int size;
    int *arr;
    int front;
    int rear;

    CirQueue(int size)
    {
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    void push(int data)
    {
        // FULL
        // single ele
        //circular queue
        //else
        if(front==0 && rear==size-1 || front-rear==1){
                 cout<<"Queue if full "<<endl;
                 return ;
        }
        else if(front==-1 && rear==-1)
        {
            rear=0;
            front=0;
            arr[rear]=data;
        }
        else if(front==size-1 && front!=0)
        {
            rear=0;
            arr[rear]=data;
        }
        else{
            rear++;
            arr[rear]=data;
        }
    }
    void pop()
    {
        // empty
        //single element
        //circular
        //else
        if(rear==-1 )
        {
            cout<<"Queue is Empty "<<endl;
            return ;
        }
        else if(rear==0){
            arr[rear]=-1; // marking 
            rear=-1;
        }
        else if(front==size-1){
            front=0;    
        }
        else{
            front++;
        }
    }

    int getfront()
    {
        return arr[front];
    }

    bool isempty()
    {
        if(front-rear==1)
        return true;
        else
        return false;
    }
    int getsize()
    {
        return rear-front+1;
    }
};

int main(){
    
    CirQueue cq(10);
    cq.push(10);
    cq.push(20);
    cq.push(65);

  if(cq.isempty()){
    cout<<"Q is Empty "<<endl;
  }
  else{
  cout<<"Not Empty "<<endl;
  }

cout<<"\nSize: "<<cq.getsize()<<endl;

  cout<<"\nPrinting..."<<endl;
  while(!cq.isempty())
  {
    cout<<cq.getfront()<<" ";
    cq.pop();
  }
 
   if(cq.isempty()){
    cout<<"\nQ is Empty "<<endl;
     }
  else
  cout<<"Not Empty ";


    return 0;
}