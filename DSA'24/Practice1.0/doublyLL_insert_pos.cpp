#include<iostream>
using namespace std;

class node
{   
    public:
    int data;
    node*  prev;
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

int getLength(node* head){
    int len=0;
    node* temp=head;
    while(temp){
        len++;
        temp=temp->next;
    }
return len;
}

void insert_Atpos(node* &head,node* &tail,int data,int pos)
{
    if(head==nullptr)
    {
        node* newNode=new node(data);
        head=newNode;
        tail=newNode;
        return ;
    }
    int len=getLength(head);

    if(pos==0)
    {
        node* newNode=new node(data);
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
        return ;
    }
    else if( pos>=len){

        node* newNode= new node(data);
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
        return;
    }

    // at any position insert:
    int i=1;
    node* previ=head;
    while(i<pos-1)
    {
        previ=previ->next;
        i++;
    }
    node* curr=previ->next;

    node* newNode=new node(data);
    newNode->next=curr;
    curr->prev=newNode;
    previ->next=newNode;
    newNode->prev=previ;

}

void display(node* head){
    node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    
    node* head=NULL;
    node* tail=NULL;

    cout<<"Enter the No. of Node ele : "<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the Node Element: "<<endl;
        int ele;
        cin>>ele;
        int pos;
        cout<<"Enter the Position of element: 0->head  , >n ->tail   "<<endl;
        cin>>pos;
        insert_Atpos(head,tail,ele,pos);
    }
    cout<<"Output is : "<<endl;
    display(head);

    return 0;
}