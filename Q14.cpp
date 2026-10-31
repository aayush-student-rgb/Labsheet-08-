#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator c;

    int a, b;
    double x, y;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Integer sum: " << c.add(a, b) << endl;

    cout << "Enter two decimal numbers: ";
    cin >> x >> y;

    cout << "Decimal sum: " << c.add(x, y) << endl;

    return 0;
}