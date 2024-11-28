#include<iostream>
using namespace std;
int main()
    {
int n;
cin>>n;
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n-i+1;j++)
    {
        cout<<j<<" ";
    }
    int space=n-i;
    while(space)
    {
        cout<<" ";
        space--;
    }
    int star=i-1;
    while(star)
    {
        cout<<" * ";
        star--;
    }
  int k=1;
  int str=i-1;
  while(k<=str)
  {
    cout<<"*";
    k++;

  }
  int spce=i-1;
    while(spce)
    {
        cout<<" ";
        spce--;
    }
  for(int m=n-i+1 ;m>=1; m--)
  {
  
    cout<< m <<" ";
  }
    
   
    cout<<endl;
}
    }
