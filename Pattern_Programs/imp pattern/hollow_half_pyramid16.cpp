#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
for(int row=0;row<n;row++)
{
    for(int space=0;space<n-row-1;space++)
    {
        cout<<" ";
    }
     int start=1;
    for(int col=0;col<2*row+1;col++)
    {
       
        if(row==0||row==n-1)
        {
if(col%2==0)
{
    cout<<start;
    start++ ;
}
else
{
    cout<<" " ;
}
        }
        else{
        if(col==0)
        {
            cout<<1;
        }
        else if(col==2*row+1-1)
        {
cout<<row+1;
        }
        else{
            cout<<" ";
        }


        }
        
    }
    cout<<endl;
}
return 0;
}