#include<iostream>
using namespace std;
class node
{  
    public:
    int data;
    node* prev;
    node* next;

    // call constructor:
    node()
    {
        this->data=0;
        this->prev=NULL;
        this->next=NULL;
    }

    // parameterized costructor:
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

void print(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    
    node* head=NULL;

    InsertAtHead(head,10);
    InsertAtHead(head,20);
    InsertAtHead(head,30);

    cout<<"LL is:"<<endl;
    print(head);
    return 0;
}