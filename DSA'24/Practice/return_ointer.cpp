#include <iostream>
using namespace std;

// Function to dynamically allocate memory and return a pointer to it
int* returnByPointer() {
    int *ptr = new int(10); // Dynamically allocate memory for an integer
    return ptr; // Return the pointer to the allocated memory
}

int main() {
    int *ptr = returnByPointer(); // Call the function and get the returned pointer

    cout << "Value at the memory location: " << *ptr << endl; // Dereference the pointer to access the value

    // Modify the value through the pointer
    *ptr = 20;
    cout << "Modified value at the memory location: " << *ptr << endl;

    delete ptr; // Deallocate the dynamically allocated memory

    return 0;
}
