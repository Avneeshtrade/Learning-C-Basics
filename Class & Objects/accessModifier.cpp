#include <iostream>

using namespace std;

class BankAccount {
private:
    int balance; // Private: Not accessible outside
public:
    void setBalance(int b) {
        balance = b;
    }
    int getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc;
    acc.setBalance(5000); // ✅ Allowed through function
    cout << acc.getBalance(); // ✅ Allowed through function
}