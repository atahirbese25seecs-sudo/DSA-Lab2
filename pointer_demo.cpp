#include <iostream>
using namespace std;

void analyze_pointer(int *ptr) {
    cout << "Memory address: " << ptr << endl;
    cout << "Value at address: " << *ptr << endl;
}

int main() {

    // Stack variable
    int stackValue = 50;

    cout << "Stack variable:" << endl;
    analyze_pointer(&stackValue);

    // Heap variable
    int *heapValue = new int;
    *heapValue = 100;

    cout << "\nHeap variable:" << endl;
    analyze_pointer(heapValue);

    // Free heap memory
    delete heapValue;

    return 0;
}