#include<iostream>
#include<stack>
using namespace std;

int main(){
    
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    // check top ele
    cout<<"top ele:"<<st.top()<<endl;

    // check stack empty or not
    cout<<"Empty or Not "<<st.empty()<<endl;

    cout<<"Size of stack:"<<st.size()<<endl;

    // delete top of ele:
    st.pop();

    cout<<"NOW top ele:"<<st.top()<<endl;

    // print the stack ele
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    
    return 0;
}