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

void Level_order_Traversal(node* root){ 

    if(root==NULL)
    return ;

    queue<node*>q;
    q.push(root);

    while(!q.empty()){

        node* front=q.front();
        q.pop();

        cout<<front->data<<" ";

        if(front->left!=NULL)
        q.push(front->left);

        if(front->right!=NULL)
        q.push(front->right);
        
    }
}

// void Level_order_Traversal(node* root){ //for print Lelevwise Print:

//     if(root==NULL)
//     return ;

//     queue<node*>q;
//     q.push(root);
//     q.push(NULL); // for levelwise printing:

//     while(!q.empty()){

//         node* front=q.front();
//         q.pop();

//         if(front==NULL){
//             cout<<endl;
//             if(!q.empty())
//             q.push(NULL);
//         }
//         else{
//         cout<<front->data<<" ";

//         if(front->left!=NULL)
//         q.push(front->left);

//         if(front->right!=NULL)
//         q.push(front->right);
//         }
//     }
// }

int main(){
    node* root=Create_Tree();

    //cout<<"Height of Tree : "<<height(root)<<" ";

    Level_order_Traversal(root);

    return 0;
}