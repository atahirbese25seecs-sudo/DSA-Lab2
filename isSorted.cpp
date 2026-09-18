#include <iostream>
#include <cassert>
using namespace std;

// Function declaration
bool isSorted(const int* arr, const int size);

bool isSorted(const int* arr, const int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }

    return true;
}
// Test 1: Sorted ascending array
void testSortedAscending() {
    int arr[] = {1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true);
}

// Test 2: Unsorted array
void testUnsortedArray() {
    int arr[] = {1, 3, 2, 4, 5};
    assert(isSorted(arr, 5) == false);
}

// Test 3: Duplicate values
void testDuplicateValues() {
    int arr[] = {1, 2, 2, 3, 4};
    assert(isSorted(arr, 5) == true);
}

// Test 4: Single element
void testSingleElement() {
    int arr[] = {10};
    assert(isSorted(arr, 1) == true);
}

// Test 5: Descending array
void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};
    assert(isSorted(arr, 5) == false);
}

// Test 6: Negative values
void testNegativeValues() {
    int arr[] = {-5, -3, -1, 0, 2};
    assert(isSorted(arr, 5) == true);
}

// Test 7: All values equal
void testAllEqual() {
    int arr[] = {7, 7, 7, 7};
    assert(isSorted(arr, 4) == true);
}

// Test 8: Two elements unsorted
void testTwoElementsUnsorted() {
    int arr[] = {2, 1};
    assert(isSorted(arr, 2) == false);
}
// Test 9: Already sorted with larger gaps
void testLargeGaps() {
    int arr[] = {-100, -10, 0, 50, 1000};
    assert(isSorted(arr, 5) == true);
}

// Test 10: Unsorted at the last pair
void testUnsortedAtEnd() {
    int arr[] = {1, 2, 3, 5, 4};
    assert(isSorted(arr, 5) == false);
}

int main() {

    testSortedAscending();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testAllEqual();
    testTwoElementsUnsorted();
    testLargeGaps();
    testUnsortedAtEnd();

    cout << "All tests passed!" << endl;

    return 0;
}