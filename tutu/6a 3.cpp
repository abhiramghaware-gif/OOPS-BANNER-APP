#include <iostream>
#include <string>
using namespace std;
 
class Person {
protected:
    string name;
public:
    void setName(string n) { name = n; }
    void displayName() { cout << "Name       : " << name << endl; }
};
 
class Teacher : public Person {
protected:
    string subject;
public:
    void setSubject(string s) { subject = s; }
    void displaySubject() { cout << "Subject    : " << subject << endl; }
};
 
class Professor : public Teacher {
    string department;
public:
    void setDepartment(string d) { department = d; }
    void display() {
        displayName();
        displaySubject();
        cout << "Department : " << department << endl;
    }
};
 
int main() {
    Professor prof;
    prof.setName("Abhiram");
    prof.setSubject("Data Structures");
    prof.setDepartment("Computer Science");
    prof.display();
    return 0;
}