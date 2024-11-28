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
int position(int inOrder[],int size,int element){
    for(int i=0;i<size;i++){
        if(inOrder[i]==element)
        return i;
    }
    return -1;
}
Node* bluidTree(int preOrder[],int inOrder[],int size,int& preIndex,int inOrderStart,int inOrderEnd){

    //base case:
    if(preIndex>=size || inOrderStart>inOrderEnd)
    return NULL;

    //step-A
    int element=preOrder[preIndex++];
    Node* root=new Node(element);
    int pos=position(inOrder,size,element);

    //Step-B
    root->left=bluidTree(preOrder,inOrder,size,preIndex,inOrderStart,pos-1);
    //Step-C
    root->right=bluidTree(preOrder,inOrder,size,preIndex,pos+1,inOrderEnd);

    return root;
}
void levelOrder(Node* root){
    if(root==NULL)
    return ;

    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* front=q.front();
        q.pop();
        if(front==NULL){
            cout<<endl;
            if(!q.empty())
            q.push(NULL);
        }
        else{
            cout<<front->data<<" ";

            if(front->left!=NULL)
            q.push(front->left);

            if(front->right!=NULL)
            q.push(front->right);
        }
    }

}
int main(){
    Node* root =NULL;
    int preOrder[]={1,2,4,3,5};
    int inOrder[]={4,2,1,3,5};
    int size=5;
    int preIndex=0;
    int inOrderStart=0;
    int inOrderEnd=size-1;
    root=bluidTree(preOrder,inOrder,size,preIndex,inOrderStart,inOrderEnd);

    cout<<"Printing level Order Traversal..."<<endl;
    levelOrder(root);
    return 0;
}