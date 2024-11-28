#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }

    Node(int val){
        this->data = val;
        this->next = NULL;
    }
};

void insertAtTail(Node* &head, Node* &tail, int data){
    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }

    else{
        Node* newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
    }
}

void printNode(Node* &head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp-> next;
    }
}

// void reverseList(Node* &head){
// //     Node* prev = NULL;
// //     Node* curr = head;
// //     Node* Next =curr;
    
// //     while(Next!=NULL)
// //     {
// //        Next=curr->next;
// //        curr->next=prev;
// //        prev=curr;
// //        curr=Next;
// //  }
// //     head=prev;
// }

// reverse list Using rcursion:
void reverseList(Node* &head,Node* prev,Node* curr)
{
    //base case
    if(curr==nullptr)
    {
       head=prev;
        return ;
    }

    //1 case tum kro:
    Node* Next=curr->next;
    curr->next=prev;
    reverseList(head,curr,Next);
}


int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtTail(head,tail, 10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);


    printNode(head);
    cout<<endl<<endl;
    Node* prev=NULL;
    Node* curr=head;

    reverseList(head,prev,curr);
    printNode(head);
    


    return 0;
}