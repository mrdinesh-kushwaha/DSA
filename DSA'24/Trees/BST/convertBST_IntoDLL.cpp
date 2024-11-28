#include<iostream>
#include<queue>
using namespace std;

class Node{

    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};
Node* insertIntoBST(Node* root,int currdata){

    if(root==NULL)
    {
        root=new Node(currdata);
        return root;
    }
    // no first element:
    if(root->data >currdata){
        root->left=insertIntoBST(root->left,currdata);
    }
    else{
        root->right=insertIntoBST(root->right,currdata);
    }

    return root;
}
void takeInput(Node* &root){

    int data;
    cout<<"Enter the Node Elmenet "<<endl;
    cin>>data;

    while(data!=-1){
       root= insertIntoBST(root,data);
       cin>>data;
    }
}

void levelOrderPrint(Node* &root){

    if(root==NULL)
    return;

    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* frontNode=q.front();
        q.pop();

        if(frontNode==NULL){
            cout<<endl;
            if(!q.empty())
            q.push(NULL);
        }
        else{
            cout<<frontNode->data<<" ";

            if(frontNode->left)
            q.push(frontNode->left);

            if(frontNode->right)
            q.push(frontNode->right);
        }
    }
}

void convertBST_intoDLL(Node* root,Node* &head){
    if(root==NULL){
        return;
    }

    //right SubTree into LL::
    convertBST_intoDLL(root->right,head);

    //attach root Node::
    root->right=head;
    if(head!=NULL){
        head->left=root;
    }

    //Upadate head::
    head=root;

    //left Call
    convertBST_intoDLL(root->left,head);
}

void printDLL(Node* head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->right;
    }
}
int main(){
    Node* root=NULL;

    takeInput(root);
    cout<<"Printing BST..."<<endl;
    levelOrderPrint(root);

    Node* head=NULL;
    convertBST_intoDLL(root,head);

    cout<<"Printing Doubly LL :"<<endl;

    printDLL(head);


    return 0;
}