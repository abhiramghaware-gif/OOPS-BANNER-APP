#include <iostream>
using namespace std;
 
inline float calcDiscount(float bill) {
    if (bill > 5000)
        return bill - (bill * 0.10);
    return bill;
}
 
int main() {
    float bill;
    cout << "Enter bill amount: ";
    cin >> bill;
    cout << "Final Amount: " << calcDiscount(bill) << endl;
    return 0;
}
