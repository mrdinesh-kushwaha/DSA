#include<set>
#include<iostream>
using namespace std;

int main(){
    
    //** Set Contain only unique Value::

    // Return Sorted Order::

    set<int> s;

    cout<<"Enter The Size of set:\n";

int n;
cin>>n;
cout<<"Enter Element:\n";

    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        s.insert(temp);
    }

    for(auto i: s)
    cout<<i<<" ";

    cout<<"\n";

    //Iterator::

    set<int>::iterator it=s.begin();
    it++;
     
     s.erase(it);
     cout<<"\n After Erase :\n";
     for(auto i:s)
     cout<<i<<" ";

     cout<<"\n check 5 present or Not:"<< s.count(5)<<endl;

    set<int>:: iterator itr=s.find(5);  // print 5 and five ke aage vala elem only::

    for(auto it=itr;it!=s.end();it++)
    cout<<*it<<" ";
     
    return 0;
}