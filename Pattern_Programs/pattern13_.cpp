#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
  int i;
    for(int i=1;i<=n;i++)
    {
     
        for(int j=1;j<=n;j++)
        {
            char s='A'+i+j-2;
            cout<<s<<" ";
        
        }
       
        cout<<endl;
    }

    return 0;
}