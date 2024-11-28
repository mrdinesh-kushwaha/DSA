#include<iostream>
using namespace std;

int powr(int a,int b)
{
    int ans=1;
   while(b>0)
   {
     if(b&1)
     {
        ans=ans*a;
     }
     a=a*a;
     b>>=1;
   }
   return ans;
}

int main(){
    
    int ans=powr(5,4);
    cout<<ans;
    return 0;
}