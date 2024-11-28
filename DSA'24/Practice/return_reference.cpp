#include <iostream>
using namespace std;

// Function to return a reference to an integer
int& returnByReference(int& num) {
    num *= 2; // Manipulate the original value
    return num; // Return a reference to the manipulated value
}

int main() {
    int value = 5;
    cout << "Original value: " << value << endl;

    int& ref = returnByReference(value); // Get a reference to the returned value
    cout << "Value after manipulation: " << value << endl;
    cout << "Reference value: " << ref << endl;

    ref = 11; // Modify through the reference
    cout << "Value after modification through reference: " << value << endl;

    return 0;
}
