#include <iostream>

void sort(int arr[], int idx, int size) {
    // Base case
    if (idx == size)
        return;

    int smallestIdx = idx; // Take current idx element as smallest

    for (int i = idx + 1; i < size; ++i) {
        if (arr[smallestIdx] > arr[i]) // Found another smallest element than arr[smallestIdx]
            smallestIdx = i; // Update the smallestIdx val
    }

    // Place smallest element found at idx
    int temp = arr[idx];
    arr[idx] = arr[smallestIdx];
    arr[smallestIdx] = temp;

    // One part done, recursion will do the other work
    sort(arr, idx + 1, size);
}

int main() {
    int arr[] = {6, 2, 8, 4, 10};
    int size = 5;

    sort(arr, 0, size);

    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
