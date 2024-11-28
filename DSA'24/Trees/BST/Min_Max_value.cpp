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

int minVlaue(Node* root){
    Node* temp=root;

    if(root==NULL)
    return -1;

    while(temp->left!=NULL){
        temp=temp->left;
    }

    return temp->data;
}

int maxVlaue(Node* root){

    if(root==NULL)
    return -1;

    Node* temp=root;

    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp->data;
}

int main(){
    Node* root=NULL;

    takeInput(root);
    cout<<endl;
    
    cout<<"Min value is :"<<minVlaue(root)<<endl;
    cout<<"Maximum value is :"<<maxVlaue(root)<<endl;

    return 0;
}