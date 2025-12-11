#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;           // left boundary
    int end = size - 1;      // right boundary

    // calculate mid safely
    int mid = start + (end - start) / 2;

    while (start <= end) {   // jab tak valid window hai
        // check middle element
        if (arr[mid] == key) {
            return mid;      // found -> return index
        }

        // if key is greater than middle element -> search right half
        if (key > arr[mid]) {
            start = mid + 1; // move left boundary to right of mid
        } else {
            // else search left half
            end = mid - 1;   // move right boundary to left of mid
        }

        // update mid for the new window
        mid = start + (end - start) / 2;
    }

    // element not present
    return -1;
}

int main() {
    int even[6] = {2, 4, 6, 8, 12, 18}; // size 6 -> 6 values
    int odd[5]  = {3, 8, 11, 14, 16};

    int evenIndex = binarySearch(even, 6, 12); // search 12 in even
    int oddIndex  = binarySearch(odd, 5, 14);  // search 14 in odd

    cout << "12 in even array index: " << evenIndex << endl; // expected 4
    cout << "14 in odd array index: "  << oddIndex  << endl; // expected 3

    return 0;
}
