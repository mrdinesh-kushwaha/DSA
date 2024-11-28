#include<iostream>
#include<vector>
#include<queue>
#include<limits.h>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
        
  }
};

class NodeData{
    public:
    int size;
    int maxVal;
    int minVal;
    bool validBST;

    NodeData(){

    }

    NodeData(int size,int max,int min,bool valid){
        this->size=size;
        maxVal=max;
        minVal=min;
        validBST=valid;
    }
};

NodeData* LargestBST(TreeNode* root,int &ans){
    
    if(root==NULL){
       NodeData* temp= new NodeData (0, INT_MIN , INT_MAX, true);
       return temp;
    }

    // left me jao
    NodeData* leftAns=LargestBST(root->left,ans);
    NodeData* rightAns=LargestBST(root->right,ans);

    NodeData* currNode=new NodeData();

    currNode->size= leftAns->size + rightAns->size + 1;
    currNode->minVal= min(root->data,leftAns->minVal);
    currNode->maxVal= max(root->data,rightAns->maxVal);

    // check  valid BST or Not::
    if(leftAns->validBST && rightAns->validBST &&(root->data >leftAns->maxVal && root->data < rightAns->minVal)){
        currNode->validBST=true;
    }
    else{
        currNode->validBST=false;
    }

    if(currNode->validBST){
        ans=max(ans,currNode->size);
    }
    
    return currNode;

    }

int main(){
    TreeNode* root= new TreeNode(10);
    root->left=new TreeNode(12);
    root->right= new TreeNode(8);

    root->left->left= new TreeNode(6);
    root->left->right= new TreeNode(10);

    root->right->left= new TreeNode(5);

    int ans=0;
    LargestBST(root,ans);

    cout<<"Largest BST in Binary Tree:: "<<ans ;
    return 0;
}