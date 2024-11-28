#include<iostream>
#include<queue>
#include<map>
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

Node* createTree(){
    int data;
    cout<<"Enter the Node Element "<<endl;
    cin>>data;
    //base case:
    if(data==-1)
    return NULL;

    Node* root=new Node(data); // craete New Node:
    cout<<"Enter left Node "<<root->data<<endl;
    root->left=createTree();

    cout<<"Enter right Node "<<root->data<<endl;
    root->right=createTree();

    return root;
    
}

void printTree(Node* root) // level wise:
{
    if(root==NULL)
    return;
    
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* frontNode=q.front();
        q.pop();
        if(frontNode==NULL)
        {
            cout<<endl;
            if(!q.empty())
            q.push(NULL);
        }
        else{
            cout<<frontNode->data<<" ";

            if(frontNode->left!=NULL)
            q.push(frontNode->left);

            if(frontNode->right!=NULL)
            q.push(frontNode->right);
        }

    }
}

void printTopView(Node* root)
{
    if(root==NULL)
    return;
    
    map<int,int>mapping;

    queue<pair<Node*,int>>q;
    q.push(make_pair(root,0));// initially::

    while(!q.empty()){

        pair<Node*,int>temp=q.front();
        q.pop();

        Node* frontNode=temp.first;
        int hd=temp.second;

        // check krte hai mapping me hd present hain ya nhi if nahi then insert:
        if(mapping.find(hd)==mapping.end())// means present nhi hai tab:
        {
            mapping[hd]=frontNode->data;
        }

        //call recursion left,right Node:
        if(frontNode->left!=NULL)
        q.push(make_pair(frontNode->left,hd-1));

        if(frontNode->right)
        q.push(make_pair(frontNode->right,hd+1));

    }

    for(auto i: mapping)
    cout<<i.first<<"->"<<i.second<<endl; 
}
int main()
{
    Node* root=NULL;
  
    root=createTree();

// cout<<"Tree here..."<<endl;
// printTree(root);

cout<<"Printing TopView..."<<endl;

printTopView(root);
return 0;

}