#include<iostream>
#include<vector>
using namespace std;

void  subseqeuance(string str,string output,vector<string>& ans,int i)
{
    //base condition
    if(i>=str.length())
    {
        ans.push_back(output);
        return ;
    }
    //exclude
     subseqeuance(str,output,ans,i+1);

     // include
    output.push_back(str[i]);
     subseqeuance(str,output,ans,i+1);
}
int main(){
    
    vector<string> ans; 

    string str="123";

    string output=" ";

    int i=0;

    subseqeuance(str,output,ans,i);

    for(auto val:ans)
    cout<<val<<" ";

    cout<<"\n size of ans:"<<ans.size();

    return 0;
}