#include<iostream>
#include<vector>

using namespace std;

bool print(string& str ,int& n,int i,char& ch, vector<int>& ans)
{
    if(i>=n)
    return false;

    if(str[i]==ch)
    {
    ans.push_back(i);
    }
    return print(str,n,i+1,ch,ans);
}

int main(){
    
    vector<int>ans;
    string str="dinesh";

    int n=str.length();

    cout<<"size:"<<n<<endl;

    int i=0;

    char ch='e';

    print(str,n,i,ch,ans);

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }

 
    
    return 0;
}