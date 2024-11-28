#include<iostream>
using namespace std;

void counting(string str,int n, int i, char k,int& count)

{

    if(i>=n)
    return ;

    if(str[i]=='k')
    count++;

    counting(str,n,i+1,k,count);

}

int main(){
    
string str= "dinesh kkkumakkr";
int n=str.length();

int count=0;

int i=0;

char key='k';

counting(str,n,i,key,count);

cout<<"No. Of ouccrences:"<<count;

    return 0;
}