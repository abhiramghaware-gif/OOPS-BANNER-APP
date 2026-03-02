#include <iostream>
#include <string>
using namespace std;
 
class Student {
protected:
    string name;
    int rollNumber;
public:
    void setStudent(string n, int r) { name = n; rollNumber = r; }
};
 
class SportsPlayer {
protected:
    string sportName;
    int ranking;
public:
    void setSports(string s, int r) { sportName = s; ranking = r; }
};
 
class SportStudent : public Student, public SportsPlayer {
public:
    void display() {
        cout << "Name      : " << name << endl;
        cout << "Roll No   : " << rollNumber << endl;
        cout << "Sport     : " << sportName << endl;
        cout << "Ranking   : " << ranking << endl;
    }
};
 
int main() {
    SportStudent ss;
    ss.setStudent("Abhiram GHaware", 187);
    ss.setSports("Football", 3);
    ss.display();
    return 0;
}