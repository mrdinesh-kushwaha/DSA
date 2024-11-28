#include<iostream>
using namespace std ;
int main()
{
    int n;
    cin>>n;
    for(int row =0;row< n ;row++)
     {
      char ch='A' ;
        for(int col=0;col<row+1;col++)
        {

         cout<<ch<<" ";
         ch++ ;
        }
        for(int col=row;col>=1;col--)
        {
          ch= col+'A'-1;
          cout<<ch<<" " ;
        }
       
        cout<<endl; 
     }
  
} 