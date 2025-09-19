#include <iostream>
using namespace std;

// Function to analyze pointer
void analyze_pointer(int *ptr) {
    cout << "Memory Address: " << ptr << endl;
    cout << "Value: " << *ptr << endl;
}

int main() {
    // --- Stack allocation ---
    int iValue = 42;        // allocate on stack
    cout << "Stack variable:" << endl;
    analyze_pointer(&iValue);

    // --- Heap allocation ---
    int *hValue = new int;  // allocate on heap
    *hValue = 99;           // assign value
    cout << "\nHeap variable:" << endl;
    analyze_pointer(hValue);

    // Free heap memory
    delete hValue;

    return 0;
}
