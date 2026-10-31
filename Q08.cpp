#include <iostream>
#include <vector>
using namespace std;

int diagonalSum(const vector<vector<int>>& matrix) {
    int sum = 0;

    for (int i = 0; i < matrix.size(); i++) {
        sum += matrix[i][i];
    }

    return sum;
}

int main() {
    int size;

    cout << "Enter order of square matrix: ";
    cin >> size;

    if (size <= 0)
        return 0;

    vector<vector<int>> matrix(size, vector<int>(size));

    cout << "Enter matrix elements:\n";

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Sum of diagonal elements: "
         << diagonalSum(matrix);

    return 0;
}