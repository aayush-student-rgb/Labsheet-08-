#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    double price;

    void inputDetails() {
        cout << "Enter car brand: ";
        getline(cin >> ws, brand);

        cout << "Enter car price: ";
        cin >> price;
    }

    void displayDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Car c1, c2;

    cout << "Enter first car details:\n";
    c1.inputDetails();

    cout << "\nEnter second car details:\n";
    c2.inputDetails();

    cout << "\nFirst Car:\n";
    c1.displayDetails();

    cout << "\nSecond Car:\n";
    c2.displayDetails();

    return 0;
}