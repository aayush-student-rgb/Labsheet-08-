#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() const = 0;

    virtual ~Shape() = default;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double area() const override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, breadth;

public:
    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }

    double area() const override {
        return length * breadth;
    }
};

int main() {
    double radius, length, breadth;

    cout << "Enter radius of circle: ";
    cin >> radius;

    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;

    if (radius < 0 || length < 0 || breadth < 0) {
        cout << "Dimensions cannot be negative.";
        return 0;
    }

    Circle c(radius);
    Rectangle r(length, breadth);

    cout << "Area of Circle: " << c.area() << endl;
    cout << "Area of Rectangle: " << r.area() << endl;

    return 0;
}