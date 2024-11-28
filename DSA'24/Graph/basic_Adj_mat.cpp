#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the nodes of Graph: "<<endl;
    cin>>n;
    int e;
    cout<<"Enter the number of edages : "<<endl;
    cin>>e;
    vector<vector<int>>adj(n,vector<int>(n,0));
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        //mark 1
        adj[u][v]=1;
    }
    cout<<"Adj matrix of graph is : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<adj[i][j]<<" ";
        }

            cout<<endl;
    }

    return 0;

}