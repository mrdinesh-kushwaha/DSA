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

void removedeplicate_unsort(node* &head)
{
    if(head==nullptr)
    {
        return ;
    }

    // >1 ele

    node* curr=head;
    node* temp=curr->next;
    node* prev=curr;
    while(curr!=nullptr)
    {
       while(temp!=nullptr)
       {
        if((temp!=nullptr)&&(curr->data==temp->data))
        {
            temp=temp->next;
            prev->next=temp;

        }
        else{
            temp=temp->next;
            prev=prev->next;
        }

       }

       curr=curr->next;
       prev=curr;
       temp=curr->next;

       
    }
    
}

void display(node* &head)
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
    
                    node* first= new node(2); // value print by default constructor:::
                    node* second=new node(3);
                    node* third=new node(2);// call parameterized constructor::
                    node* fourth=new node(5);
                    node* five=new node(3);

first->next=second;
second->next=third;
third->next=fourth;
fourth->next=five;

cout<<" LL output is::"<<endl;

display(first);
cout<<endl;

// int len = length(first);
// cout<<len<<endl;

removedeplicate_unsort(first);
cout<<"remove deplicate:\n";
display(first);


    return 0;
}