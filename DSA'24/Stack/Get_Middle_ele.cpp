#include<iostream>
#include<stack>
using namespace std;

void getMiddle(stack<int>&s ,int total_size)
{
    // edage case:
    if(s.size()==0)
    {
        cout<<"Stack is Empty:"<<endl;
        return;
    }
    if(s.size()==1){
    cout<<"Middle element is: "<<s.top()<<endl;
    return ;
    }

    //step-1 check  base case:
    if(s.size()==total_size/2 +1)
    {
        cout<<"Middle element is: "<<s.top()<<endl;
        return;
    }
    //step-2 store top ele and pop
    int temp=s.top();
    s.pop();

    //step-3 call recursion
    getMiddle(s,total_size);

    //step-4 backtarck:
    s.push(temp);

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
    int size=s.size();
    getMiddle(s,size);

    return 0;
}