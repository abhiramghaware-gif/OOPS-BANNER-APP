#include <iostream>
using namespace std;
 
class AccountB;  // Forward declaration
 
class AccountA {
    float balance;
public:
    AccountA(float b) : balance(b) {}
    void display() { cout << "Account A Balance: " << balance << endl; }
    friend void transfer(AccountA &a, AccountB &b, float amount);
};
 
class AccountB {
    float balance;
public:
    AccountB(float b) : balance(b) {}
    void display() { cout << "Account B Balance: " << balance << endl; }
    friend void transfer(AccountA &a, AccountB &b, float amount);
};
 
void transfer(AccountA &a, AccountB &b, float amount) {
    if (a.balance >= amount) {
        a.balance -= amount;
        b.balance += amount;
        cout << "Transfer successful!" << endl;
    } else {
        cout << "Insufficient balance!" << endl;
    }
}
 
int main() {
    AccountA a(10000);
    AccountB b(5000);
    a.display();
    b.display();
    transfer(a, b, 3000);
    a.display();
    b.display();
    return 0;
}
