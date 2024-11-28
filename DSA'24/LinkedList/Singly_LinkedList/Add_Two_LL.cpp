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

node* reverse(node* &head)
{
    node* prev=NULL;
    node* curr=head;
    node* Next=curr->next;

    while(Next!=NULL)
    {
        Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
    }
    return prev;
}

node* Add2LL(node* &head1,node* &head2)
{
    // edages cases sambhalo
    if(head1==nullptr)
    return head2;
    if(head2==NULL)
    return head1;

    //step-1 reverse both LL:
    
    head1=reverse(head1);
    head2=reverse(head2);

    // step-2 Add both LL
    int carry=0;
    node* anshead=NULL;
    node* anstail=NULL;

    // addition also take 3 step:
    while(head1!=NULL && head2!=NULL)
    {
        int sum= carry+head1->data+ head2->data;
        int digit= sum % 10;
        carry= sum/10;

        //create new node to store the digit
        node* newNode=new node(digit);

            if(anshead==NULL)
            {
                anshead=newNode;
                anstail=newNode;
            }
            else{
                anstail->next=newNode;
                anstail=newNode;
            }

            head1 =head1->next;
            head2= head2->next;
    }

    while(head1!=NULL)
    {
        int sum=carry+head1->data;
        int digit=sum%10;
        carry=sum/10;

        node* newNode=new node(digit);

        anstail->next=newNode;
        anstail=newNode;

        head1=head1->next;


    }

    while(head2!=NULL)
    {
        int sum=carry+head2->data;
        int digit=sum%10;
        carry=sum/10;

        node* newNode=new node(digit);
        
        anstail->next=newNode;
        anstail=newNode;

        head2=head2->next;
    }

    // step-3 check caryy ! NULL

    while(carry!=0)
    {
        int sum=carry;
        int digit=sum%10;
        carry=sum/10;

        node* newNode=new node(digit);

        anstail->next=newNode;
        anstail=newNode;

    }


    // step-4 reverse final LL and return:

    anshead=reverse(anshead);

    return anshead;

}

int main(){
    
 node* head1= new node(1); // value print by default constructor:::
 node* second=new node(2);
 node* third=new node(3);// call parameterized constructor::
 node* fourth=new node(4);
 node* five=new node(5);

head1->next=second;
second->next=third;
third->next=fourth;
fourth->next=five;

node* head2=new node(9);
node* f1= new node(9);
node* s2= new node(9);

head2->next=f1;
f1->next=s2;


cout<<" LL output is::"<<endl;

// int len = length(head1);
// cout<<len<<endl;

node* head=Add2LL(head1,head2);
cout<<"\nPrint Sum of 2 LL:\n";

display(head);


    return 0;
}