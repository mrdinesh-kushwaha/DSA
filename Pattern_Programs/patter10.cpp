#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
for(int i=1;i<=n;i++)
{
    int t=i;
    for(int j=1;j<=i;j++)
    {
        cout<<t<<" ";
        t--;
    }
    cout<<endl;
}



    return 0;
}