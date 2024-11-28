#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        
char t='A';//t='A'+j-1 then no need for t++
for(int j=1;j<=n;j++)
{
    cout<<t<<" ";
    t++;
}
cout<<endl;
    }
    return 0;
}