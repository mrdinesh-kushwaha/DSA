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
bool findEle(Node* root,int target){
    if(root==NULL)
    return false;

    if(root->data==target)
    {
        return true;
    }

    if(root->data>target){
    return findEle(root->left,target);
    }
    else{
    return findEle(root->right,target);
    }

}

int main(){
    Node* root=NULL;

    takeInput(root);
    cout<<endl;
    bool l=findEle(root,90);

    if(l==true){
        cout<<"data is present "<<endl;
    }
    else{
        cout<<"Not present "<<endl;
    }

    return 0;
}