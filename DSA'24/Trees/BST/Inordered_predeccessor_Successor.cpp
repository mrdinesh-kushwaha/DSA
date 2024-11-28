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

void inOrder(TreeNode* root,vector<int>&ans){

    if(root=NULL)
    return;
    //left
    inOrder(root->left,ans);
    ans.push_back(root->data);
    //right
    inOrder(root->right,ans);
}

int getInorder_Predeccessor(vector<int>ans,int predeccessor){

    for(int i=0;i<ans.size();i++){
        if(ans[i]==predeccessor)
        return ans[i-1];
    }
}

int main(){
    TreeNode* root=NULL;
    root=takeInput(root);
    cout<<"Printing Level order traversal: "<<endl;
    PrintLevelTraversal(root);
    vector<int>ans={0};
    // int predeccessor=3;

    inOrder(root,ans);
    cout<<"PreOrder Is : "<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    // int p=getInorder_Predeccessor(ans,predeccessor);
    // cout<<"Predecessor of "<<predeccessor<<":"<<p;

    return 0;
}