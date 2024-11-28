#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

node* getMiddle(node* &head)
{
    // ll is empty:
    if(head==nullptr)
    {
        cout<<"LL is Empty:"<<endl;
        return head ;
    }
    // 1 hi node hai
    if(head->next==NULL)
    {
        return head;

    }

    //node >1
    node* slow=head;
    //node* fast=head; even second ele middle
    node* fast=head->next; // even first  ele middle

    while(slow!=nullptr && fast!=nullptr)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
}

void print(node* &head)
{
    node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    
    node* head=new node(10);
    node* second=new node(20);
    node* third=new node(30);
    node* fourth=new node(40);
    node* fifth=new node(50);
   

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=nullptr;

    print(head);

    cout<<"\n Middle element is:"<<getMiddle(head)->data<<endl;

    return 0;
}