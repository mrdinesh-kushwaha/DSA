#include<iostream>
#include<vector>
using namespace std;

class TrieNode{
    public:
    char data;
    bool isTerminal;
    TrieNode* children[26];

    TrieNode(char d){
        this->data=d;
        isTerminal=false;

        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
    }
};

void insertWord(TrieNode* root, string word){

    //base case:
    if(word.size()==0){
        root->isTerminal=true;
        return;
    }

    char ch =word[0];
    int index= ch-'a';
    TrieNode* child;

    if(root->children[index]!=NULL){
        // means char mil gya:::
        child=root->children[index];
    }
    else{
        // not present
        child= new TrieNode(ch);
        root->children[index]=child;
    }

    //call recursion
    insertWord(child,word.substr(1));
}

void storeSuggetions(string& prefix, TrieNode* curr,vector<string>& temp){

    //base case:
    if(curr->isTerminal){
        temp.push_back(prefix);
    }

    for(char ch='a';ch<='z';ch++){  // a to z char me jao aur dekho present hai ya nhi

        int index=ch-'a';
        TrieNode* Next= curr->children[index];

        if(Next!=NULL){
            // means child present
            prefix.push_back(ch);
            storeSuggetions(prefix,Next,temp);
            prefix.pop_back();
        }
    }
}
vector<vector<string>> getSuggetions(TrieNode* root, string input){

    // some var/ Trienode
    TrieNode * prev=root;
    vector<vector<string> >output;
    string prefix="";

    for(int i=0;i<input.length();i++){
        char lastch=input[i];
        int index= lastch-'a';

        TrieNode* curr= prev->children[index];

        if(curr==NULL)
        break; 
        else{
            // jao char curr se banne vake sbhi string lekr aao
            vector<string>temp;
            prefix.push_back(lastch);
            storeSuggetions(prefix,curr,temp);
            output.push_back(temp);
            prev=curr;
        }
    }
    return output;

}
int main(){
    TrieNode* root= new TrieNode('-');
    string input= "lovi";

    vector<string>v;
    v.push_back("loveu");
    v.push_back("lover");
    v.push_back("loving");
    v.push_back("lost");
    v.push_back("lord");
    v.push_back("lane");
    v.push_back("last");

    // insert into Trie
    for(int i=0;i<v.size();i++){
        insertWord(root,v[i]);
    }

    vector<vector<string> >ans= getSuggetions(root,input);

    cout<<"Printing All Suggetions of : "<<input<<endl;
    
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<",";
        }
        cout<<endl;
    }

    return 0;
}