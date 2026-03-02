#include <iostream>
#include <string>
using namespace std;
 
class Student {
protected:
    string name;
    int roll;
public:
    void setStudent(string n, int r) { name = n; roll = r; }
    void displayStudent() {
        cout << "Name    : " << name << endl;
        cout << "Roll No : " << roll << endl;
    }
};
 
class Marks : virtual public Student {
protected:
    float m1, m2, m3;
public:
    void setMarks(float a, float b, float c) { m1=a; m2=b; m3=c; }
    float totalAcademic() { return m1 + m2 + m3; }
    void displayMarks() {
        cout << "Marks         : " << m1 << ", " << m2 << ", " << m3 << endl;
        cout << "Academic Total: " << totalAcademic() << endl;
    }
};
 
class Sports : virtual public Student {
protected:
    float smarks;
public:
    void setSports(float s) { smarks = s; }
    void displaySports() { cout << "Sports Marks  : " << smarks << endl; }
};
 
class Result : public Marks, public Sports {
public:
    void display() {
        displayStudent();
        displayMarks();
        displaySports();
        float total = totalAcademic() + smarks;
        cout << "Overall Total : " << total << endl;
        cout << "Average       : " << total / 4 << endl;
    }
};
 
int main() {
    Result r;
    r.setStudent("Bob", 202);
    r.setMarks(85, 90, 78);
    r.setSports(92);
    r.display();
    return 0;
}