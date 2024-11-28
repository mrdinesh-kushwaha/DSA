#include<iostream>
using namespace std;

class node
{   
    public:
    int data;
    node* prev;
    node* next;

    node()
    {
        this->data=0;
        this->prev=NULL;
        this->next=NULL;

    }
    node(int data)
    {
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};

void InsertAtHead(node* & head,int data)
{
    // head NULL ho :
    if(head==NULL)
    {
        node* newNode= new node(data);
        head=newNode;
        return;
    }

    // nahi hai tab
    //step1 create newnode
    node* newNode= new node(data);
    //step2
    head->prev=newNode;
    newNode->next=head;
    //step3 update head
    head=newNode;
}

void InsertAtHead(node* & head,node* tail,int data)
{
    // head NULL ho :
    if(head==NULL)
    {
        node* newNode= new node(data);
        head=newNode;
        tail=newNode;
        return;
    }

    // nahi hai tab
    //step1 create newnode
    node* newNode= new node(data);
    //step2
    head->prev=newNode;
    newNode->next=head;
    //step3 update head
    head=newNode;
}

void InsertAtTail(node*& head, node* &tail,int data){

    // node is Empty:
    if(tail==NULL)
    {
        node* newNode=new node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    // not empty
    
    node* newNode=new node(data);
    tail->next=newNode;
    newNode->prev=tail;

    tail=newNode;

}

// void print(node *tail)
// {
//     node* temp=tail;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->prev;
//     }
// }

void print(node *head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    
    node* tail=NULL;
    node* head=NULL;
    InsertAtTail(head,tail,10);
    InsertAtTail(head,tail,20);
    InsertAtTail(head,tail,30);
    InsertAtTail(head,tail,40);
    InsertAtHead(head,tail,5);
    
    cout<<"LL is:"<<endl;
    // print(tail); // print reverse ho rha hai 
                // beacause hum last se print kar rhe hai aur pichee aa rhe hai
    
    print(head);
    return 0;
}