#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
     char t='A';
  
    for(int i=1;i<=n;i++)
    {
     
        for(int j=1;j<=n;j++)
        {
            char s=t+j-1;
            cout<<s<<" ";
        
        }
        t++;
        cout<<endl;
    }

    return 0;
}