#include<iostream>
using namespace std ;
int main()
{
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
{
    for(int space=0;space<n-row-1 ;space++)
    {
        cout<<" " ;
    }
    int start=row+1;
    for(int col=0;col<row+1;col++ )
    {
        cout<<start;
        start++ ;
    }
    int k=2*row;
    for(int col=0;col<row;col++)
    {
        cout<<k;
        k-- ;
    }
    cout<<endl ;

}
return 0;
}