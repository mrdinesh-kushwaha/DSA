#include<iostream>
using namespace std;

void print_subsequences(string str,string output,int i){

    //base condition
    if(i>=str.length())
    {
        cout<<output<<" ";
        return ;
    }

    //exclude -> do nothing
    print_subsequences(str,output,i+1);

    //Include
   // output=output+str[i];  or
  // output.push_back(str[i]);
  
    //print_subsequences(str,output,i+1);  or
    print_subsequences(str,output+str[i],i+1);


}
int main(){
    
    string str="abc";

    string output=" ";

    int i=0;

    print_subsequences(str,output,i);


    return 0;
}