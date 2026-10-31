#include <iostream>
#include <vector>
using namespace std;

void addMatrices(const vector<vector<int>>& a,
                 const vector<vector<int>>& b,
                 vector<vector<int>>& result) {

    int rows = a.size();
    int cols = a[0].size();

    result.assign(rows, vector<int>(cols, 0));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main() {
    int rows, cols;

    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    if (rows <= 0 || cols <= 0)
        return 0;

    vector<vector<int>> a(rows, vector<int>(cols));
    vector<vector<int>> b(rows, vector<int>(cols));
    vector<vector<int>> result;

    cout << "Enter first matrix:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> a[i][j];

    cout << "Enter second matrix:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> b[i][j];

    addMatrices(a, b, result);

    cout << "Sum of matrices:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << result[i][j] << " ";

        cout << endl;
    }

    return 0;
}