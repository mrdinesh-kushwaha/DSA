#include<iostream>
using namespace std;
void Print_Permutation(string& str,int i)
{
    //base case:
    if(i>=str.length())
    {
        cout<<str<<" ";
        return;
    }

    // 1 case solve
    for(int j=i;j<str.length();j++)
    {
        swap(str[i],str[j]);
        //call recursion:
         Print_Permutation(str,i+1);
         
         // Backtracking :
         swap(str[i],str[j]);
    }
}
int main(){
    
    string str="abcd";

    Print_Permutation(str,0);

    return 0;
}