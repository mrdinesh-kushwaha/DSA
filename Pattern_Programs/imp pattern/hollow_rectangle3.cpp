#include<iostream>
using namespace std ;
int main()
{
    int row;
    int col;
    int i,j;
    cin>>row>>col;
    for( i=0 ;i<row ;i++)
{
    if(i==0||i==row-1)
    {
        for( j=0;j<col;j++)
        {
            cout<<"* ";

        }
    }
    else 
    {
        cout<<"* ";
        for(int k=0;k<col-2;k++)
        {
            cout<<" ";
        }
        cout<<"* ";
    }
    cout<<endl;
}

} 