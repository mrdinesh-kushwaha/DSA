#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    
    unordered_map<string,int>mp; // cteate  <key,value>

    // insertion
    pair<string,int>p=make_pair("Dinesh",19);
    mp.insert(p);

    pair<string,int>p1{"Arman",34};
    mp.insert(p1);

    mp["Harsh"]=123;

    // print
    cout<<mp.at("Dinesh")<<endl;

    cout<<mp["Harsh"]<<endl;
    //cout<<mp["Raja"]<<endl; not present then create with value '0'

    cout<<"Size of map : "<<mp.size()<<endl;

    // searching elemeent:
    cout<<mp.count("Dinesh")<<endl; // return 0 or 1 search in key::

    if(mp.find("Harsh")!=mp.end()){ // return iterator::
        cout<<"Key is present "<<endl;
    }
    else{
        cout<<"key Not Present :"<<endl;
    }

    cout<<"Printing Map element: "<<endl;

    for(auto& i:mp){
        cout<<"Key-> "<< i.first<<" -> "<<i.second<<endl; // i.first ->key , i.second ->Value
    }



    return 0;
}