#include <iostream>
#include <vector>
#include <utility>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int size = arr.size();

    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }
}

int main() {
    int size;

    cout << "Enter array size: ";
    cin >> size;

    if (size <= 0)
        return 0;

    vector<int> arr(size);

    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    bubbleSort(arr);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}