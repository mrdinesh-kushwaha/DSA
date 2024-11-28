#include<iostream>
#include<vector>
using namespace std;

bool issafe(int i,int j,int row,int col,int arr[3][3],vector<vector<bool>>&visited)
{
    if(((i>=0 && i<row)&&(j>=0 && j<col)) && (arr[i][j]==1) && (visited[i][j]==false) )
    {
        return true;
    }
    else
    {
        return false;
    }
}
void solvemaze(int arr[3][3],int row,int col,int i,int j,string output,
vector<vector<bool>>&visited ,vector<string> &ans)
{

// base case :Kaha rukna hai:::
if(i==row-1 && j==col-1)
{
    ans.push_back(output);
    return ;
}

// 1 case tum kro baki recursion sambhal legaa
// reach at destination allow (down->left->right->up)

//down:->i+1,j
if(issafe(i+1,j,row,col,arr,visited))
{
    visited[i+1][j]=true;

    //baki recusion
    solvemaze(arr,row,col,i+1,j,output+'D',visited,ans);
    //backtracking
    visited[i+1][j]=false;
}

// left-> :i,j-1

if(issafe(i,j-1,row,col,arr,visited))
{
    visited[i][j-1]=true;

    //baki recusion
    solvemaze(arr,row,col,i,j-1,output+'L',visited,ans);
    //backtracking
    visited[i][j-1]=false;
}

// right;->: i,j+1

if(issafe(i,j+1,row,col,arr,visited))
{
    visited[i][j+1]=true;

    //baki recusion
    solvemaze(arr,row,col,i,j+1,output+'R',visited,ans);
    //backtracking
    visited[i][j+1]=false;
}

// up->: i-1,j

if(issafe(i-1,j,row,col,arr,visited))
{
    visited[i-1][j]=true;

    //baki recusion
    solvemaze(arr,row,col,i-1,j,output+'U',visited,ans);
    //backtracking
    visited[i-1][j]=false;
}

}

int main(){

    int maze[3][3]={
        {0,0,0},
        {1,1,0},
        {1,1,1}};

    int row=3;
    int col=3;
    if(maze[0][0]==0){
    cout<<"Path Not Exist";
    return 0 ;
    }

    string output="";
    vector<string> ans;
    vector<vector<bool>>visited(row,vector<bool>(col,false));
    visited[0][0]=true;

    solvemaze(maze,row,col,0,0,output,visited,ans);

  cout<<"Here results is:"<<endl;
  for(auto i:ans)
  {
    cout<<i<<" ";
  }
    cout<<endl;

      if(ans.size()==0)
    cout<<"Not path exist";

    return 0;
}