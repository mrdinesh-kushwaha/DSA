#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&s ,int target)
{
  // step-1 base case:
    if(s.size()==0)
    {
        s.push(target);
        return ;
    }
    // step-2 
    int temp=s.top();
    s.pop();
    // step3
    solve(s,target);
    // step4
    s.push(temp);

}
void Insert_bottom(stack<int>&s)
{
    if(s.size()==0)
    {
        cout<<"Stack is Empty: "<<endl;
        return ;
    }
    int target=s.top();
    s.pop();
    solve(s,target);

}
int main(){
    
    stack<int>s;
    int n;
    cout<<"enter no element:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {   int ele;
        cin>>ele;
        s.push(ele);
    }
    cout<<"Size is"<<s.size()<<endl;
   // cout<<"before Stack element is"<<endl;
    // while(!s.empty())
    // {
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
   
   Insert_bottom(s);
    cout<<"After Stack element is"<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }


    return 0;
}