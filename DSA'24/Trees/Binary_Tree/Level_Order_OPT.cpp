#include<iostream>
#include<queue>
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

int height(node* root){
    if(root==NULL){
    return 0;  // when count Node for height then '0'
   // return -1; // when count edages for Height then '-1'
    }

    int leftHeight=height(root->left);
    int rightHeight=height(root->right);

    return max(leftHeight,rightHeight)+1;
}

void printLevel(node* root,int i){

    if(root==NULL)
    return ;
    if (i==1)
    cout<<root->data<<" ";
    else if(i>1){
        printLevel(root->left,i-1);
        printLevel(root->right,i-1);
    }
}

void Level_order_Traversal(node* root){  // takes T.C=O(N) S.C=O(1)

    // if(root==NULL)
    // return ;

    int h=height(root);

    for(int i=1;i<=h;i++){
        printLevel(root,i);
    }
}


int main(){
    node* root=Create_Tree();

    //cout<<"Height of Tree : "<<height(root)<<" ";

    Level_order_Traversal(root);

    return 0;
}