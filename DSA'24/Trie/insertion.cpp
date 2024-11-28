// trie is data structure , used for matching String  (T.C= length of String)
#include<iostream>
using namespace std;

class TrieNode{
    public:
    char data;
    bool isTerminal;
    TrieNode* childern[26];

    TrieNode(char d){
        this->data=d;
        isTerminal=false;

        for(int i=0;i<26;i++){
            childern[i]=NULL;
        }
       
    }
};

void insertTrieNode(TrieNode* root, string word){  // Insert TrieNode

    //cout<<"Inserting "<<word<<endl;
    //base case:
    if(word.size()==0){

        // means word end ho gya then mark isterminal as True:
        root->isTerminal=true;
        return;
    }

    char ch= word[0];
    int index=ch-'a';
    TrieNode* child;

    // check present 
    if(root->childern[index]!=NULL){
        child=root->childern[index];
    }  
    else{ // present nhi hai:

        child=new TrieNode(ch);
        root->childern[index]=child;
    }

    // recursion call
    insertTrieNode(child,word.substr(1));
}

int main(){
    
    TrieNode* root= new TrieNode('-');

    insertTrieNode(root,"");   // inserting
    insertTrieNode(root,"code");
    insertTrieNode(root,"coder");
    insertTrieNode(root,"codingdines");
    insertTrieNode(root,"codingdinesh");

   
    return 0;
}
