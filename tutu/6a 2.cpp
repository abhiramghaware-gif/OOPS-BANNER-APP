#include <iostream>
#include <cmath>
using namespace std;
 
class Shape {
public:
    virtual void getData() = 0;
    virtual void printData() = 0;
    virtual double area() = 0;
};
 
class Rectangle : public Shape {
    double length, width;
public:
    void getData() {
        cout << "Enter length and width: ";
        cin >> length >> width;
    }
    void printData() { cout << "Rectangle: " << length << " x " << width << endl; }
    double area() { return length * width; }
};
 
class Circle : public Shape {
    double radius;
public:
    void getData() {
        cout << "Enter radius: ";
        cin >> radius;
    }
    void printData() { cout << "Circle radius: " << radius << endl; }
    double area() { return M_PI * radius * radius; }
};
 
int main() {
    Rectangle r;
    r.getData();
    r.printData();
    cout << "Area of Rectangle: " << r.area() << endl;
 
    Circle c;
    c.getData();
    c.printData();
    cout << "Area of Circle: " << c.area() << endl;
    return 0;
}