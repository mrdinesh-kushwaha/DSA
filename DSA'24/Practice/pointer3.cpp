#include <iostream>
using namespace std;

int* solve() {
    int a = 25;     // Local variable 'a' is created
    int* ans = &a;  // Pointer 'ans' is assigned the address of 'a'
    return ans;     // Return the pointer 'ans'
}   // 'a' goes out of scope and is destroyed here

int main() {
    int* result = solve();  // Calling the function and storing the returned pointer
    cout << *result << endl;  // Dereferencing the pointer (undefined behavior, could print garbage)
    return 0;
}
