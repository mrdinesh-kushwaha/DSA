#include<iostream>
using namespace std;

class node
{

public:
int data;
node* next;
// default const.
node()
{
    this->data=0;
    this->next=NULL;
}
node(int data)
{
    this->data=data;
    this->next=NULL;
}


};

void Insert_atHead(node* &head,node* &tail,int data)
{
    if(head==NULL)
    {
        node* newNode=new node(data); //create newNode 
        head=newNode; // when head null
        tail=newNode; // when tail null
        return;
    }
    // step-1:
    node* newNode=new node(data);
    // step-2:
    newNode->next=head;
    // step-3
    head=newNode;
}

void Insert_atTail(node* &head,node* &tail,int data)
{
    if(head==NULL)
    {
        node* newNode=new node(data);// create newNode 
        head=newNode; // when head null
        tail=newNode; // when tail null
        return ;
    }
    //step-1:
    node* newNode=new node(data);
    //step-2:
    tail->next= newNode;
    //step-3 connect tail at newNode
    tail=newNode;
}
void display(node*  head)
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
    node* tail=NULL;

         Insert_atHead(head,tail,20);
        Insert_atHead(head,tail,78);
        Insert_atTail(head,tail ,90);
          Insert_atHead(head,tail,18);
          Insert_atTail(head,tail ,190);

       display(head);

    return 0;
}