#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    // constructor default ->used to initialized the value 

    node()
    {
        this->data=0;
        this->next=NULL;
    }
    // parameterazed constructor:
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    } 

};

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int length(node* &first){
    if(first == NULL){
        return 0;
    }

    int l = 1 + length(first -> next);
     return l;

}

node* reverseLL(node* head)
{
    node* prev=nullptr;
    node* curr=head;
    node* Next=curr->next;

    while(Next!=nullptr)
    {
        Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
    }

    return prev;
}

bool getpalidrome(node*& head){
    // ll is empty:
    if(head==nullptr)
    {
        cout<<"LL is Empty:"<<endl;
        return false;
    }
    // 1element:
    if(head->next==nullptr)
    {
        return true;
    }

    // step-1 find middle ele:
    node* slow=head;
    node* fast=head->next;

    while(fast!=nullptr)
    {
        fast=fast->next;
        if(fast!=nullptr)
        {
            fast=fast->next;
            slow=slow->next;
        }
    }

    //step-2 find second half(slow->next) ka reverse:

    node* reverse_head=reverseLL(slow->next);

    // connect second half reverse ll to the first half ll
    slow->next=reverse_head;

    //step-3 comparison both half :
    node* first_half=head;
    node* second_half=reverse_head;

    while(second_half!=NULL)
    {
        if(first_half->data!=second_half->data)
        {
            // Not palidrome
            return false;
        }
        first_half=first_half->next;
        second_half=second_half->next;
    }

    // otherwise true
    return true;
}

int main(){
    
                node* first= new node(1); // value print by default constructor:::
                node* second=new node(2);
                node* third=new node(3);// call parameterized constructor::
                node* fourth=new node(3);
                node* five=new node(2);
                 node* six=new node(1);

first->next=second;
second->next=third;
third->next=fourth;
fourth->next=five;
five->next=six;

cout<<" LL output is::"<<endl;

display(first);
cout<<endl;

// int len = length(first);
// cout<<len<<endl;

cout<<"check palidrome or Not:"<<endl;

if(getpalidrome(first))
{
    cout<<"Valid palidrome:"<<endl;
}
else{
    cout<<"Not Valid Palidrome:"<<endl;
}

    return 0;
}