#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> next_Smaller(vector<int> input)
{
    vector<int>ans(input.size());
    stack<int>s;
    s.push(-1);

    for(int i=input.size()-1;i>=0;i--) // R to L
    {
        int curr=input[i];
        while(s.top()>=curr)
        {
            s.pop();
        }
        // means smaller mil gya:
        ans[i]=s.top();
        // store kr lo stack me curr ko
        s.push(curr);
    }
    return ans;
}

vector<int> prev_Smaller(vector<int> input)
{
    vector<int>ans(input.size());
    stack<int>s;
    s.push(-1);

    for(int i=0;i<input.size();i++) // L to R
    {
        int curr=input[i];
        while(s.top()>=curr)
        {
            s.pop();
        }
        // means smaller mil gya:
        ans[i]=s.top();
        // store kr lo stack me curr ko
        s.push(curr);
    }
    return ans;
}

int main(){
    vector<int>input;
    input.push_back(2);
    input.push_back(1);
    input.push_back(4);
    input.push_back(3);
    input.push_back(9);

    vector<int>ans1= next_Smaller(input);
    cout<<"Next smaller ele is:"<<endl;
    for(int i=0;i<ans1.size();i++)
    {
        cout<<ans1[i]<<" ";
    }
    cout<<endl;

    vector<int>ans2= prev_Smaller(input);
    cout<<"Previous smaller ele is:"<<endl;
    for(int i=0;i<ans2.size();i++)
    {
        cout<<ans2[i]<<" ";
    }
    return 0;
}