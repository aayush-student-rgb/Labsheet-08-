#include <iostream>
using namespace std;

void printFibonacci(int count) {
    int first = 0, second = 1;

    for (int i = 0; i < count; i++) {
        cout << first << " ";

        int next = first + second;
        first = second;
        second = next;
    }
}

int main() {
    int count;

    cout << "Enter number of terms: ";
    cin >> count;

    if (count < 0)
        cout << "Invalid input.";
    else
        printFibonacci(count);

    return 0;
}