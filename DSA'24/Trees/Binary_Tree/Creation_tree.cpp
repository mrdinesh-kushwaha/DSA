#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node* left;
    node* right;

    node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

node* Create_Tree()
{
    int data;
    cout<<"Enter the data: "<<endl;
    cin>>data;

    if(data==-1)
    return NULL;

    //step-1 create root node:
    node* root = new node(data);

    //step-2 add left node
    cout<<"Left node of "<< root->data<<endl;
    root->left=Create_Tree();
    
    // step-3 add in right node:
    cout<<"Right node of "<< root->data<<endl;
    root->right=Create_Tree();

    return root;
}

void display(node* root){

      if (root) {
        cout << "Parent: " << root->data << std::endl;
        
        // if (root->left)
        //     std::cout << "Left Child: " << root->left->data << std::endl;
        
        // if (root->right)
        //     std::cout << "Right Child: " << root->right->data << std::endl;
        
       display(root->left);
       display(root->right);
    }
    return ;
}

// traversal :
// 1: preOrder: Root, left,right
// 2: inorder:  left, Root, right
// 3: postOrder: left, right, Root

void preOrder(node* root){
    if(root==nullptr){
        return ;
    }
    // step-1: root node
    cout<<root->data<<" ";
    // step-2 :left node
    preOrder(root->left);
    // step-3: right node:
    preOrder(root->right);

}

void inOrder(node* root){
    if(root==NULL)
    return;

    // L,rooT,R
    inOrder(root->left);

    cout<<root->data<<" ";

    inOrder(root->right);
}

void postOrder(node* root){

    if(root==NULL){
        return;
    }

    // L,R,root
    postOrder(root->left);

    postOrder(root->right);

    cout<<root->data<<" ";
}

int main(){

    node* root=Create_Tree();

    // cout<<root->data<<" ";

    cout<<"Printing..."<<endl;
    display(root);
    cout<<"Preorder..."<<endl;
    preOrder(root);
    cout<<endl;
    cout<<"Inorder..."<<endl;
    inOrder(root);
    cout<<endl;
    cout<<"Postorder..."<<endl;
    postOrder(root);

    return 0;
}