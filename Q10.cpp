#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int roll_no;
    float marks;

public:
    void inputDetails() {
        cout << "Enter student name: ";
        getline(cin >> ws, name);

        cout << "Enter roll number: ";
        cin >> roll_no;

        cout << "Enter marks: ";
        cin >> marks;
    }

    void displayDetails() {
        cout << "\nStudent Details\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_no << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;

    s.inputDetails();
    s.displayDetails();

    return 0;
}