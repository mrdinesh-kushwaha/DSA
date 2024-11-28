#include<iostream>
using namespace std;
int main()
{
    int row,col;
cin>>row;
for(int i=0;i<row;i++)
{
    for(col=0;col<=i;col++)
    {
        cout<< "* ";
    }
    cout<<endl;
}
}