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

void preOrder(Node* root){

    if(root==NULL)
    return;

    //NLR
    cout<<root->data<<" ";

    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root){

    if(root==NULL)
    return;

    //LNR
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(Node* root){

    if(root==NULL)
    return;

    //LRN
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main(){
    Node* root=NULL;

    takeInput(root);

    cout<<"Printing BST..."<<endl;

    levelOrderPrint(root);

    cout<<"PreOrder: ";
    preOrder(root);
    cout<<"\nInOrder :";
    inOrder(root);
    cout<<"\npostOrder :";
    postOrder(root);
    return 0;
}