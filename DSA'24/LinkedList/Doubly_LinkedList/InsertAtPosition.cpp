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

int getLength(node* head)
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

void InsertAtPosition(node* &head,node *tail,int data,int position)
{
    // LL is Empty:
    if(head==NULL)
    {
        node* newNode=new node(data);
        head =newNode;
        tail=newNode;
        return;
    }

    // insert at head '0'
    if(position==1)
    {
        InsertAtHead(head,tail,data);
        return;
    }

    // insert at last/tail :
    int len=getLength(head);

    if(position>len)
    {
        InsertAtTail(head,tail,data);
        return ;
    }
    // LL not emptty
    
    //step1 find preNode and Curr
    node* prevNode=head;
    int i=1;
    while(i<position-1)
    {
        prevNode=prevNode->next;
        i++;
    }
    // node* curr=prevNode->next;

    // // step2 create newNode:
    // node* newNode=new node(data);
    // //step3
    // prevNode->next=newNode;
    // newNode->prev=prevNode;
    // //step4
    // curr->prev=newNode;
    // newNode->next=curr;

    //**without curr node**//

    //step1
    node*newNode=new node(data);
    //step2
    prevNode->next->prev=newNode;
    newNode->next=prevNode->next; //yaha prevNode->next hi curr hai
    //step3
    prevNode->next=newNode;
    newNode->prev=prevNode;

}

void reverseList(node* &head){
    node* curr = head;
    node* Next =curr;
    
    while(Next!=NULL)
    {
        Next=curr->next;
        node* right=Next->next;
       
       curr->next=Next;
       Next->next=curr;
        curr=Next;
       Next=right;
 }
    head=curr;
}

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
    cout<<endl;

     reverseList(head);

     print(head);
    cout<<endl;

    // InsertAtPosition(head,tail,500,4);
    // print(head);

    return 0;
}