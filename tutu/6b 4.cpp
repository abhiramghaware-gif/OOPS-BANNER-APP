#include <iostream>
using namespace std;
 
inline void checkResult(int s1, int s2, int s3) {
    int total = s1 + s2 + s3;
    cout << "Total: " << total << endl;
    if (s1 >= 40 && s2 >= 40 && s3 >= 40)
        cout << "Result: PASS" << endl;
    else
        cout << "Result: FAIL" << endl;
}
 
int main() {
    int s1, s2, s3;
    cout << "Enter marks of 3 subjects: ";
    cin >> s1 >> s2 >> s3;
    checkResult(s1, s2, s3);
    return 0;
}
