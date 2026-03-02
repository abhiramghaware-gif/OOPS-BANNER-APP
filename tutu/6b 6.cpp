#include <iostream>
using namespace std;
 
class ExternalMarks;  // Forward declaration
 
class InternalMarks {
    int marks;
public:
    InternalMarks(int m) : marks(m) {}
    friend void totalMarks(InternalMarks &i, ExternalMarks &e);
};
 
class ExternalMarks {
    int marks;
public:
    ExternalMarks(int m) : marks(m) {}
    friend void totalMarks(InternalMarks &i, ExternalMarks &e);
};
 
void totalMarks(InternalMarks &i, ExternalMarks &e) {
    int total = i.marks + e.marks;
    cout << "Internal Marks : " << i.marks << endl;
    cout << "External Marks : " << e.marks << endl;
    cout << "Total Marks    : " << total << endl;
}
 
int main() {
    InternalMarks i(35);
    ExternalMarks e(60);
    totalMarks(i, e);
    return 0;
}
