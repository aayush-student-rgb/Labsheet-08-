#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void inputPersonDetails() {
        cout << "Enter name: ";
        getline(cin >> ws, name);

        cout << "Enter age: ";
        cin >> age;
    }

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    float marks;

public:
    void inputStudentDetails() {
        inputPersonDetails();

        cout << "Enter marks: ";
        cin >> marks;
    }

    void displayStudentDetails() {
        cout << "\nStudent Details\n";

        displayPersonDetails();

        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;

    s.inputStudentDetails();
    s.displayStudentDetails();

    return 0;
}