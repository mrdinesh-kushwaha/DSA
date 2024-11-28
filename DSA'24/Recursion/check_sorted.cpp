#include<iostream>
#include<vector>
using namespace std;

bool issorted(vector<int>& v,int& n,int i)
{
    if(i==n-1)
    return true;

    if(v[i+1]<v[i]) //ascennding order:
    return false;

    return issorted(v,n,i+1);
}
using namespace std;

int main(){
    
vector<int>v{1,2,3,45,50,95};

int n=v.size();

int i=0;

if(issorted(v,n,i))
cout<<"Sorted :"<<endl;

else
cout<<"Not sorted:"<<endl;

    return 0;
}