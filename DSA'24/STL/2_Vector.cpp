#include<iostream>
#include<vector>
using namespace std;

int main(){
    
//     vector<int> v;

//     cout<<"Enter size of Array:\n";
//     int n;
//     cin>>n;

//     cout<<"Enter the Element in Array:\n";
    
//     for(int i=0;i<n;i++)
//     {
//         int temp;
//        cin>>temp;
//         v.push_back(temp);

//     }
     
//      cout<<"You Entered Element:"<<endl;
     
//     for(auto i:v)
//     cout<<i<<" ";

// cout<<endl;
//     cout<<"Capacity of array:"<<v.capacity()<<endl; // total space for element rkhne ke liye

//     cout<<"array ke andar kitnne element hai :"<<v.size()<<endl;

//     cout<<"array ke First element :"<<v.front()<<endl;
//     cout<<"array ke Last element :"<<v.back()<<endl;

//     v.clear();  /// Array ke element ko remove ke liye

//      cout<<"After Cleared Element:"<<endl;
     
//     for(auto i:v)
//     cout<<i<<" ";

// cout<<endl;
//     cout<<"Capacity of array:"<<v.capacity()<<endl; // total space for element rkhne ke liye

//     cout<<"array ke andar kitnne element hai :"<<v.size()<<endl;


    
    /// 2D vector 

    int row,col;
    int i=0;
    cout<<"Enter Row and Col:\n";

    cin>>row>>col;

vector< vector<int >> arr(row ,vector<int>(col));

cout<<"Entered 2D array element:\n";
for( i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        int temp;
        cin>>temp;
         arr[i][j]=temp;
    }

}

cout<<"You entered Element:"<<endl;
    for(int i=0;i<row;i++){
    for(int j=0;j<col;j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }





    return 0;
}