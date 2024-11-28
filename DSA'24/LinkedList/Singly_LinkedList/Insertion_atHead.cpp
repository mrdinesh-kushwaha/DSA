#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    // default constructor:
    node()
    {
        this->data=0;
        this->next=NULL;
    }

    // Parameterazed constructor::
     node(int data)
     {
        this->data=data;
        this->next=NULL;
     }
};

void Insertion_atNode(node* &head,int data)
{
    //step-1
    node* newnode=new node(data); // craete newnode::

    // step-2
    newnode->next=head; // newnode ke next ko head se add kro
    //step-3
    head=newnode; // ab head ko newnode pr le aao (point)
}

void display(node* head)
{

node* temp=head;
while(temp!=NULL)
{
    cout<<temp->data<<" ";
    temp=temp->next;
}

}

int main(){
    
    node* head= NULL;
    Insertion_atNode(head,10);
    Insertion_atNode(head,58);
    Insertion_atNode(head,89);
    Insertion_atNode(head,45);

    display(head);


    return 0;
}