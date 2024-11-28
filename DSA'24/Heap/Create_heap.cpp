#include<iostream>
using namespace std;
class heap{
    public:
    int* arr;
    int size;
    heap(){
        size=0;
        arr=new int[100];// by default not initialize...
    }
    heap(int size){
        arr= new int[size];
        this->size=size;
    }

    void insert(int value){
        size=size+1;
        int index=size;
        arr[index]=value;

        // sahi position pr lekr jao::

        while(index >1){
            int parentIndex=index/2;
            
            if(arr[index]>arr[parentIndex]){
                swap(arr[index],arr[parentIndex]);
                index=parentIndex;
            }
            else{
                break;
            }
        }

    }

    void deleteNode(int arr[6],int size){
        // store detete element:
        int ans=arr[1]; //this is the root node:
        
        //replace root from the last node::
        arr[1]=arr[size];
        size--;
        // place at right position... 
        int index=1;
        while(index<size){

            int leftIndex=2*index;
            int rightIndex=2*index+1;
            int largestIndex=index;
            if(leftIndex<=size&&arr[largestIndex]<arr[leftIndex]){
                largestIndex=leftIndex;
            }

            if(rightIndex<=size && arr[largestIndex]<arr[rightIndex]){
                largestIndex=rightIndex;
            }

            if(largestIndex==index){
                //do nothing
                return ;
            }

            else{
                swap(arr[index],arr[largestIndex]);
                index=largestIndex;
            }
        }
//return ans;
    }
};
int main(){
    
    heap h;
    // h.arr[0]=-1;
    // h.arr[1]=100;
    // h.arr[2]=50;
    // h.arr[3]=60;
    // h.arr[4]=40;
    // h.arr[5]=45;

    // h.size=5;
    //   h.insert(10);
    //   h.insert(30);
    //   h.insert(100);
    //   h.insert(150);
    //   h.insert(50);

    int arr[6]={-1,150,100,30,10,50};
  
    h.deleteNode(arr,5);
    cout<<"Printing Heap ... "<<endl; 
    for(int i=1;i<5;i++){
        cout<<arr[i]<<" ";
    }
    // h.insert(110);
    // // h.insert(201);
    // cout<<"\nPrinting Heap ... "<<endl;
    // for(int i=0;i<=h.size;i++){
    //     cout<<h.arr[i]<<" ";
    // }
    return 0;
}