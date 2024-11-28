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

void removedeplicate_sort(node* &head)
{
    if(head==nullptr)
    {
        return ;
    }

    // >1 ele

    node* curr=head;
    while(curr!=nullptr)
    {
        if((curr->next!=nullptr)&&(curr->data==curr->next->data))
        {
           // deplicate hai
        node* temp=curr->next;
        curr->next=curr->next->next;
        // remove deplicate node:
        temp->next=nullptr;
        delete temp;
        }
        else{
            curr=curr->next;
        }

       
    }
    
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
int length(node* &first){
    if(first == NULL){
        return 0;
    }

    int l = 1 + length(first -> next);
     return l;

}

int main(){
    
                node* first= new node(0); // value print by default constructor:::
                node* second=new node(0);
                node* third=new node(6);// call parameterized constructor::
                node* fourth=new node(6);
                node* five=new node(6);

first->next=second;
second->next=third;
third->next=fourth;
fourth->next=five;

cout<<" LL output is::"<<endl;

display(first);
cout<<endl;

// int len = length(first);
// cout<<len<<endl;

removedeplicate_sort(first);
cout<<"remove deplicate:\n";
display(first);


    return 0;
}