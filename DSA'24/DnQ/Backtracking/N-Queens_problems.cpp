#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

unordered_map<int,bool> rowcheck;
unordered_map<int,bool> upper_diagonal;
unordered_map<int,bool> lower_diagonal;

 void printsolve(vector<vector<char >>&board ,int n)
 {
    cout<<"No of ways to print N-Queens:"<<endl;
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
    {
        cout<<board[i][j]<<" ";
    }
    cout<<endl;
    }

    cout<<endl;
 }

bool issafe(vector<vector<char> >&board,int n,int row,int col)
{
    // only three cases check in row , up diagonal and lower diagonal

    // ckaeck int row(i,j-1)

    if(rowcheck[row]==true)
    return false;

    if(upper_diagonal[n-1+row-col]==true)
    return false;

    if(lower_diagonal[row+col]==true)
    return false;

    return true;
    // int i=row;
    // int j=col;
    // while(j>=0)
    // {
    //     if(board[i][j]=='Q')
    //     {
    //         return false;
    //     }
    //     j--;
    // }
    
    // // Upper Diagonal (i-1,j-1)
    //  i=row;
    //  j=col;
    // while(j>=0 && i>=0)
    // {
    //     if(board[i][j]=='Q')
    //     {
    //         return false;
    //     }
    //     i--;
    //     j--;
    // }

    // // Lower Diagonal(i+1,j-1)
    //  i=row;
    //  j=col;
    // while(i<n && j>=0)
    // {
    //     if(board[i][j]=='Q')
    //     {
    //         return false;
    //     }

    //      i++;
    // j--;
    // }
   
}
void solveN(vector<vector<char> >&board,int col,int n)
{
    // base case:
    if(col>=n)
    {
        printsolve(board,n);
        return ;
    }
    // 1 case tum kro baki recursion:

    for(int row=0;row<n;row++){

        if(issafe(board,n,row,col))
        {
            board[row][col]='Q';
           rowcheck[row]=true;
           upper_diagonal[n-1+row-col]=true;
           lower_diagonal[row+col]=true;

            // recusion
            solveN(board,col+1,n);
            // backtracking:
            board[row][col]= '-';

            rowcheck[row]=false;
           upper_diagonal[n-1+row-col]=false;
           lower_diagonal[row+col]=false;
        }
    }
}

int main(){
    int n=4;
    vector<vector<char> >board(n,vector<char>(n,'-'));

    int col=0;

    solveN(board,col,n);
    return 0;
}