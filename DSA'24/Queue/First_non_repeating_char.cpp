#include<iostream>
#include<queue>
using namespace std;

string solve(string str)
{
    string ans="";
    int freq[26]={0};
    queue<char>q;
    for(int i=0;i<str.length();i++)
    {
        char ch=str[i];
        // freq increase:
        freq[ch-'a']++;

        // push char in queue:
        q.push(ch);

        while(!q.empty())
        {
            if(freq[q.front()-'a']>1){
            q.pop();
            }
            else{
            ans.push_back(q.front());
            break;
        }

        }
          if(q.empty())
        {
            ans.push_back('#');
        }
    }

      
return ans;

}

int main(){
    
    string str="aac";

    cout<<"answer is : "<<solve(str)<<endl;

    return 0;
}