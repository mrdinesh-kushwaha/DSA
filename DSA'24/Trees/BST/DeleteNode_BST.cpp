#include<iostream>
#include<vector>
#include<queue>
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
TreeNode* InsertBST(TreeNode* root,int currData){

    if(root==NULL){
        root=new TreeNode(currData);
        return root;
    }

    // >1
    if(root->data > currData){
        root->left=InsertBST(root->left,currData);
    }
    else{
        root->right=InsertBST(root->right,currData);
    }
    return root;
}
TreeNode* takeInput(TreeNode* root){
    int data;
    cout<<"Enter the Node Element: "<<endl;
    cin>>data;

    while(data!=-1){
      root=InsertBST(root,data);
        cin>>data;
    }
    return root;
}

void PrintLevelTraversal(TreeNode* root){
    if(root==NULL)
    return;

    queue<TreeNode*>q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
       TreeNode* frontNode=q.front();
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

int maxVal(TreeNode* root){
     
     if(root==NULL)
     return -1;

     TreeNode* temp=root;
     while(temp->right!=NULL){
        temp=temp->right;
     }
     return temp->data;
  
}

TreeNode* deleteNodeBST(TreeNode* root,int target){
    if(root==NULL)
    return NULL;

    if(root->data==target){
        // 4 cases of deletion:

        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }

        else if(root->left!=NULL && root->right==NULL){
            TreeNode* child=root->left;
            delete root;
            return child;
        }

        else if(root->left==NULL && root->right!=NULL){
            TreeNode* child=root->right;
            delete root;
            return child;
        }

        else { // means both child exits

            int inOrderPredeccessor=maxVal(root->left);

            root->data=inOrderPredeccessor;

            root->left=deleteNodeBST(root->left,inOrderPredeccessor);

            return root;

        }
    }

    else if(root->data >target){
        root->left=deleteNodeBST(root->left,target);
    }

    else if(root->data <target){
        root->right =deleteNodeBST(root->right,target);
    }

    return root;
}


int main(){
    TreeNode* root=NULL;
    root=takeInput(root);
    cout<<"Befor Deleting Printing :"<<endl;
    PrintLevelTraversal(root);

    root=deleteNodeBST(root,34);

    cout<<"After Deletion Printing... "<<endl;
    PrintLevelTraversal(root);

    return 0;
}