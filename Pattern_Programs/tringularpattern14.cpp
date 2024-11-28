#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char t='A';
    for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
        cout<<t<<" ";
    }
    cout<<endl;
    t++;
}
return 0;
}