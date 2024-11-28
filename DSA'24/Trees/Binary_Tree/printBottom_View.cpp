#include<iostream>
#include<map>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* bluidTree(){
    int data;
    cout<<"Enter the Node Element "<<endl;
    cin>>data;

    if(data==-1)
    return NULL;

    Node* root=new Node(data);

    cout<<"Enter the left Node "<<data <<endl;
    root->left=bluidTree();

    cout<<"Enter the right Node "<<data <<endl;
    root->right=bluidTree();

    return root;

}

void printBottomView(Node* root){

    if(root==NULL)
    return ;

    map<int,int>mapping;

    queue<pair<Node*,int>>q;
    q.push(make_pair(root,0));

    while(!q.empty()){
        pair<Node*,int>temp=q.front();
        q.pop();

        Node* frontNode=temp.first;
        int hd=temp.second;

        mapping[hd]=frontNode->data;

        // call left ,right
        if(frontNode->left!=NULL)
        q.push(make_pair(frontNode->left,hd-1));

        if(frontNode->right!=NULL)
        q.push(make_pair(frontNode->right,hd+1));
    }

    cout<<"Printing bottomView... "<<endl;

    for(auto i: mapping){
    cout<<i.first<<"->"<<i.second<<endl;
    }
}
int main(){


    Node* root=NULL;

    root=bluidTree();

    printBottomView(root);

    return 0;
}