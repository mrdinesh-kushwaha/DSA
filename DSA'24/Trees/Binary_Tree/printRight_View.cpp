#include<iostream>
#include<vector>
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

TreeNode* BluidTree()
{
    int data;
    cout<<"Enter the Node element "<<endl;
    cin>>data;
    if(data==-1)
    return NULL;
    TreeNode* root=new TreeNode(data);
    cout<<"Enter the left Node "<<root->data<<endl;
    root->left=BluidTree();
    cout<<"Enter the right "<<root->data<<endl;
    root->right=BluidTree();
return root;
}

void printRightView(TreeNode* root,vector<int>&ans,int level){

    if(root==NULL)
    return;

    if(level==ans.size())
    ans.push_back(root->data);

    printRightView(root->right,ans,level+1);

    printRightView(root->left,ans,level+1);  

}
int main(){
    
    TreeNode* root=NULL;
    root=BluidTree();
    
    vector<int>ans;
    int level=0;
    printRightView(root,ans,level);
    cout<<"Printing RightView..."<<endl;
    for(auto i: ans)
    cout<<i<<" ";
    return 0;
}