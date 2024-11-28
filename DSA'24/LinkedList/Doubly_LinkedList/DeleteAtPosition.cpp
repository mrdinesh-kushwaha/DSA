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

    //destrutor::
    ~node()
    {
        cout<<"Node " <<this->data <<" Deleted :"<<endl;
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

void print(node *head)
{
    node* temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

//**delete Node//

void deleteAtposition(node* &head,node *&tail,int position)
{
    //LL is Empty:
    if(head==NULL)
    {
        cout<<"LL IS Empty:"<<endl;
        return ;
    }

    // Ek hi node hai tab
    if(head->next==NULL)
    {
        node* temp=head;
        head=NULL;
        tail=NULL;
        delete temp;

    }
      int len =getLength(head);
      if(position>len)
      {
        cout<<"Enter Please Valid Position:"<<endl;
        return ;
      }

    // deletion at head 
    if(position==1)
    {
        // phla node delete krnna hai
        node* temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
        
        return;
    }

    // delete last/ tail node
    
    if(position==len)
    {
        node* temp = tail;
        tail=tail->prev;
        tail->next=NULL;
        temp->prev=NULL;
        delete temp;
        return;

    }

    // delete at middle ele:
    
    //step1 find left ,temp and right:

    int i=1;
    node* left=head;
    while(i<position-1)
    {
        left=left->next;
        i++;
    }

    node* temp=left->next;
    node *right=temp->next;

    //step2
    left->next=right;
    right->prev=left;

    //step3
    temp->prev=NULL;
    temp->next=NULL;
    delete temp;

    return ;
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
    deleteAtposition(head,tail,2);

    print(head);
    cout<<endl;

    return 0;
}