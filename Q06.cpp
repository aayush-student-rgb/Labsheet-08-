#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main() {
    int size, target;

    cout << "Enter array size: ";
    cin >> size;

    if (size <= 0)
        return 0;

    vector<int> arr(size);

    cout << "Enter elements in ascending order: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> target;

    int result = binarySearch(arr, target);

    if (result == -1)
        cout << "Element not found.";
    else
        cout << "Element found at position " << result + 1;

    return 0;
}