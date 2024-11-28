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
int findlength(node* head)
{
    int len=0;
    node* temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
    return len;
}
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

void Insert_atPosition(node*& head,node* & tail,int position,int data)
{
    // handle cases when LL is empty::
    if(head==NULL)
    {
        node* newNode=new node(data);
        head=newNode;
        tail=newNode;
        return;
    }

    //** Two Edages cases zero and last pos::

    if(position==1)// zero pos:
    {
        Insert_atHead(head,tail,data);
        return;
    } 


    // last pos::
    int len=findlength(head);
    while(position>len)
    {
        Insert_atTail(head,tail,data);
        return;
    }


    // step-1: find prev and curr node:::

    int i=1;
    node* prev=head;
    while(i<position-1)
    {
        prev=prev->next;
        i++;
    }
    node* curr=prev->next;

    // step-2 craete newnode::
    node* newNode =new node(data);

    // step-3 :newNode ko jodo curr se::
    newNode->next=curr;

    // step-4 prev->next ko jodo newNode se::
    prev->next=newNode;

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
        cout<<"\nInsert at position:"<<endl;
        Insert_atPosition(head,tail,5,101);
        display(head);

    return 0;
}