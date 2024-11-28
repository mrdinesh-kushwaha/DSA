#include<iostream>
using namespace std;

int powr(int a,int b)
{
    int ans=1;
    for(int i=0;i<b;i++)
    {
        ans*=a;
    }
    return ans;
}

int main(){
    
    int ans=powr(4,5);
    cout<<ans;
    return 0;
}