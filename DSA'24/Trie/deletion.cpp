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

bool findWord(TrieNode* root,string word){ // Searching TrieNode

    //base case
    if(word.size()==0){
        return root->isTerminal;
    }

    char ch=word[0];
    int index=ch-'a';

    TrieNode * child;
    if(root->childern[index]!=NULL){
        // nove
        child=root->childern[index];
    }
    else{
        return false;
    }

    // call recursion
    return findWord(child,word.substr(1));

}

void removeWord(TrieNode* root, string word){  // delete TrieNode
    // base case:
    if(word.size()==0){
        root->isTerminal=false;
    }

    char ch=word[0];
    int index=ch-'a';
    TrieNode* child;

    if(root->childern[index]!=NULL){
        //move
        child=root->childern[index];
    }
    else{
        return;
    }

    // call resursion
    removeWord(child,word.substr(1));
}

int main(){
    
    TrieNode* root= new TrieNode('-');

    insertTrieNode(root,"");   // inserting
    insertTrieNode(root,"code");
    insertTrieNode(root,"coder");
    insertTrieNode(root,"codingdines");
    insertTrieNode(root,"codingdinesh");

    if(findWord(root,"code")){ // searcing
        cout<<"Present "<<endl;
    }
    else{
        cout<<"Absent "<<endl;
    }

    removeWord(root,"code"); // delete

    if(findWord(root,"code")){ //searching
        cout<<"Present "<<endl;
    }
    else{
        cout<<"Absent "<<endl;
    }
    
    return 0;
}
