#include <iostream>
#include <vector>
using namespace std;

void heapify(std::vector<int>& arr, int n, int i) {
    int largest = i;                      // heap start from zero index::
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        std::swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void Heap_Sort(vector<int>&arr,int size){
    int lastIndex=size-1;
    while(lastIndex>0){
        //swapping first and last element::
        swap(arr[lastIndex--],arr[0]); 
        heapify(arr,lastIndex,0); //element reach at right position::
    }
}

int main() {
    std::vector<int> arr = {12, 11, 13, 5, 676, 7};
    int n = arr.size();

    std::cout << "Original array is: ";
    for (int i = 0; i < n; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    for (int i = n / 2 - 1; i >= 0; --i) // building heap 
        heapify(arr, n, i);

    std::cout << "Heapified array is: ";
    for (int i = 0; i < n; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    cout<<"sorted Array is :";
    Heap_Sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
