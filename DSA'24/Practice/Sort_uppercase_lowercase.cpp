// #include<bits/stdc++.h>
// #include<string>
// using namespace std;

// void sort(string &str)
// {
//     for(int i=0;i<str.length()-1;i++)
//     {
//         for(int j=i+1;j<str.length();j++)
//         {
//             if(str[i]>str[j])
//             {
//                 char temp=str[i];
//                 str[i]=str[j];
//                 str[j]=temp;
//             }
//         }
//     }
// }

// string solve(string str){

//         string uppercase="";
//         string lowercase="";
//         int sum=0;

//         for(int i=0;i<str.length();i++)
//         {
//             if(str[i]>='A' &&  str[i]<='Z')
//             {
//                 uppercase+=str[i];
//             }
//             else if(str[i]>='a'&&str[i]<='z'){
//                 lowercase+=str[i];
//             }

//             else if(str[i]>='0'&&str[i]<='9')
//             {
//                 sum+=str[i]-'0';
//             }
//         }

//         sort(uppercase);
//         sort(lowercase);
      
//         string ans= uppercase+lowercase+to_string(sum);
//         return ans;

// }

// int main(){
//     string str;

//     cin>>str;

//     string ans=solve(str);

//     cout<<"answer is :"<<ans<<endl;


//     return 0;
// }


#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;

int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int sum=0;
    string t="";
    for(auto x: s){
        if(x-'0'<=9){
            sum+=(x-'0');
        }
        else{
            t+=x;
        }
    }
    t+=to_string(sum);
    cout<<t;
    
    
    return 0;
}