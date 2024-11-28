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

int main(){
    
                node* first= new node(1); // value print by default constructor:::
                node* second=new node(2);
                node* third=new node(30);// call parameterized constructor::
                node* fourth=new node(40);
                node* five=new node(50);

first->next=second;
second->next=third;
third->next=fourth;
fourth->next=five;

cout<<" LL output is::"<<endl;

display(first);
cout<<endl;

int len = length(first);
cout<<len<<endl;

    return 0;
}