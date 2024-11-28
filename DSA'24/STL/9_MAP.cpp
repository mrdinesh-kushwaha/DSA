#include<map>
#include<iostream>
using namespace std;

int main(){
    
    // map is Data structure which is store
    // the in the form of Key and Value::

    // All key have unique::
    //1 key only 1 value se 
    //connected hoga  1:1

    //return Soeted kay::

    // insert , delete and find :O(log(n))

//     map<int,string> mp;

//     mp[1]="Dinesh";
//     mp[2]="Arman";
//     mp[3]="Ramesh";

//     mp.insert({5,"Kumar"});

//     for(auto i:mp)
//     cout<<i.first<<"-> "<<i.second<<" "<<endl;

//     mp.erase(5);

// cout<<endl;
//       for(auto i:mp)
//     cout<<i.first<<"-> "<<i.second<<" "<<endl;

//     //iterator 
// cout<<endl;
//     auto it=mp.find(2);

//     for(auto i=it;i!=mp.end();i++)
//     {
//         cout<<(*it).first<<endl;
//     }


// insert key and value by user::

map<int ,string> m;

cout<<"ENter no. of key::\n";

int n;
cin>>n;

cout<<"Enter the Key and value:\n";

for(int i=0;i<n;i++)
{
    int key;
    cin>>key;

    string value;

    getline(cin,value);

    m.insert({key,value});
}



cout<<"You Entered ::\n";

for(auto i: m)
{
    cout<<i.first<<"->"<<i.second<<endl;
}

    return 0;
}