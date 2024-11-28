#include<iostream>
#include<queue>
using namespace std;
int getKthGreatest(int arr[],int size,int k){
    //using min Heap ::
    priority_queue<int,vector<int>,greater<int> >pq(arr,arr+k); //insert kth element ::

    for(int i=k;i<size;i++){
        int ele=arr[i];
        if(ele>pq.top()){
            pq.pop();
            pq.push(ele);
        }
    }
    int ans=pq.top();
    return ans;
}
int getkthSmallest(int arr[],int size,int k){

    // Create max heap for Find Smallest Number:: bcz space complexity =O(k)
    priority_queue<int>pq(arr,arr+k); // insert k element in queue

    for(int i=k;i<size;i++){
        int ele=arr[i];
        if(ele<pq.top()){
            pq.pop();
            pq.push(ele);
        }
    } 
    int ans=pq.top();
    return ans;
}
int main()
{
    int arr[5]={3,23,2,233,31};
    int k=5;
    int size=sizeof(arr)/sizeof(int);

    

    //Using MIN heap:::
    // priority_queue<int,vector<int>,greater<int> >pq(arr,arr+5);

    // while(--k){
    // pq.pop();               // it's take O(N) Space Complexity::
    // }
    // cout<<"Kth Smallest No is :"<<pq.top()<<endl;

    // using MAX heap::

    // priority_queue<int>pq(arr,arr+k); // size of max Heap create::::::::
    // int n=5;
    // int size=n-k;
    // while(size){
    //     int ele=arr[n-size];
    //     if(pq.top()>ele){
    //         pq.pop();
    //         pq.push(ele);
    //     }
    //     size--;
    // }
    // cout<<k<<"Smallest Element is : "<<pq.top()<<endl;



    int ans=getkthSmallest(arr,size,k);
    cout<<"Kth smallest element is :"<<ans;

     int ans1=getKthGreatest(arr,size,k);
    cout<<"\nKth Greatest element is :"<<ans1;

}