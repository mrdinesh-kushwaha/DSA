#include<iostream>
#include<vector>
using namespace std;

bool isbinary(vector<int>& v,int& n,int s,int e,int& key)
{

int mid=s+(e-s)/2;
//base condition:
if(s>e)
return false;

if(v[mid]==key)
return true;

if(v[mid]>key)
return isbinary(v,n,s,mid-1,key);
else
     return isbinary(v,n,mid+1,e,key);
}

int main(){
    
    vector<int>v{-7,44,55,555,5454};

    int n=v.size();
    int s=0,e=n-1;
    int key=555;

    bool ans=isbinary(v,n,s,e,key);

    if(ans)
    {
        cout<<"FOund ";
    }
    else
    cout<<"Not Found";

    return 0;
}